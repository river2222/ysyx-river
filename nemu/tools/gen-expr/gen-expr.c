/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <time.h>

typedef uint32_t word_t;

static char buf[65536] = {};
static char code_buf[65536 + 128] = {};
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";

static void maybe_insert_space() {
    if (rand() % 2 == 0) {
        if(strlen(buf) + 1 < sizeof(buf)) {
            strcat(buf, " ");

				}

		}
}

static void gen_num() {
    word_t num = rand() % 10;
    char num_str[3];
    snprintf(num_str, sizeof(num_str), "%u", num);
    maybe_insert_space();

		if(strlen(buf) + strlen(num_str) < sizeof(buf)) {
        strcat(buf, num_str);
        maybe_insert_space();
    }
}

static void gen_rand_op() {
    char ops[] = {'+', '-', '*', '/'};
    char op = ops[rand() % 4];
    char op_str[2] = {op, '\0'};
    maybe_insert_space();

		if(strlen(buf) + strlen(op_str) < sizeof(buf)) {
        strcat(buf, op_str);
        maybe_insert_space();
    }
}

static void gen_rand_expr() {
    if(strlen(buf) > 65536 - 50) return;

		switch (rand() % 3) {
        case 0:
            if(buf[strlen(buf) - 1] != ')') {
                gen_num();

						} 
						else {
                gen_rand_expr();

						}
            break;
        case 1:
            if(buf[0] != '\0' && strchr("+-*/", buf[strlen(buf) - 1])) {
                maybe_insert_space();
                if(strlen(buf) + 1 < sizeof(buf)) {
                    strcat(buf, "(");
                    gen_rand_expr();
                    maybe_insert_space();
                    if(strlen(buf) + 1 < sizeof(buf)) {
                        strcat(buf, ")");

										}
                }

						} 
						else {
                gen_rand_expr();
            }
            break;
        default:
            gen_rand_expr();
            gen_rand_op();
            gen_rand_expr();
            break;
    }
}

static int dividezero() {
    char *p = buf;
    while (*p) {
        if (*p == '/' && (*(p + 1) == '0' || (*(p + 1) == ' ' && *(p + 2) == '0'))) {
            return 1;
        }
        p++;
    }
    return 0;
}

int main(int argc, char *argv[]) {
    int seed = time(0);
    srand(seed);
    int loop = 1;
    if (argc > 1) {
        sscanf(argv[1], "%d", &loop);
    }
    for (int i = 0; i < loop; i++) {
        do {
            buf[0] = '\0';
            gen_rand_expr();
        } while (dividezero());

        sprintf(code_buf, code_format, buf);

        FILE *fp = fopen("/tmp/.code.c", "w");
        assert(fp != NULL);
        fputs(code_buf, fp);
        fclose(fp);

        int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
        if (ret != 0) continue;

        fp = popen("/tmp/.expr", "r");
        assert(fp != NULL);

        int result;
        ret = fscanf(fp, "%d", &result);
        pclose(fp);

        printf("%u %s\n", result, buf);
    }
    return 0;
}

