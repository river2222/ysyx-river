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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ, TK_NEQ, TK_AND, TK_OR, TK_NUM, TK_REG, TK_HEX

  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.


*/

  {" +", TK_NOTYPE},    // spaces
	{"\\(", '('},         // 
	{"\\)", ')'},         //
  {"\\+", '+'},         // plus
	{"\\-", '-'},					// minus
	{"\\*", '*'},         // multiply
	{"\\/", '/'},         // divide
  {"==", TK_EQ},        // equal
	{"!=", TK_NEQ},       // not equal
	{"\\&\\&", TK_AND},     // AND
	{"\\|\\|", TK_OR},     // OR
	{"[0-9]+", TK_NUM},              // integer constant
  {"\\$(zero|ra|sp|gp|tp|t0|t1|t2|s0|s1|a[0-7]|s[2-8]|s9|s10|s11|t[3-6])", TK_REG},        // register
  {"0[xX][0-9a-fA-F]+", TK_HEX}   // hexadecimal constant

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;


	for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);


		}

	}
}

typedef struct token {
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;


	while 
		(e[position] != '\0') {
    /* Try all rules one by one. */

	
		
			for (i = 0; i < NR_REGEX; i ++) {

	
			
				if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;
				
				switch (rules[i].token_type) {
          case TK_NOTYPE:
						break;
					default:
						tokens[nr_token].type = rules[i].token_type;
						strncpy(tokens[nr_token].str, substr_start, substr_len);
						tokens[nr_token].str[substr_len] = '\0';
						nr_token++;
						break;

	

	

				}
        break;

	

			}	

	
	
		}
		if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;

		}

	}

  return true;
}

bool check_parentheses(word_t p, word_t q) {
  if (tokens[p].type != '(' || tokens[q].type != ')') {
    return false;
  }

  int balance = 0;
  
	for (int i = p + 1; i < q; ++i) {
  
		if (tokens[i].type == '(') {
      ++balance;
    } 
	
		else if (tokens[i].type == ')') {
      --balance;
			if (balance < 0) {
        return false;
      }
    }

  }

  return balance == 0;
}


int32_t eval(word_t p, word_t q) {
    if (p > q) {
        printf("p>q Bad Expression p=%d q=%d\n",p,q);
        assert(0);
    }

		else if (p == q) { 
			printf("p=q: p=%d q=%d\n",p,q);	
			if (tokens[p].type == TK_NUM) {
            int32_t num;
            sscanf(tokens[p].str, "%d", &num);
            return num;
    
		
				} 
		
				else if (tokens[p].type == TK_HEX) {
            word_t hex;
						sscanf(tokens[p].str, "%x", &hex);
						return hex;
        } 
		
				else {
            printf("Wrong Single Input\n");
            return 0;
        }
		

		
		} 

		else if (check_parentheses(p, q) == true) {
        return eval(p + 1, q - 1);
    
		}

		
		else {
        word_t op=0;
				word_t position=0;
				word_t balance = 0;
				word_t max = 0;
				word_t t=0;
				
		
				for (word_t i = p; i <= q; i++) {
				
					if (tokens[i].type == '(') {
						++balance;
						continue;
					}
					else if (tokens[i].type == ')') {
						--balance;
						if (balance < 0){
							printf("parentheses error\n");
							assert(0);
				
						}
						continue;
				
					}
					if (balance != 0)
						continue;
				
					switch (tokens[i].type) {
						case '*': t = 1; break;
						case '/': t = 1; break;
						case '+': t = 2; break;
						case '-': t = 2; break;
						case TK_EQ: t = 3; break;
						case TK_NEQ: t = 3; break;
						case TK_AND: t = 4; break;
						case TK_OR: t = 4; break;
					}
					if (t >= max) {
						max = t;
						position = i;
				
				
					}
				
				}
				if (balance != 0){
					printf("parentheses error\n");
					assert(0);
				
				}

				op = position;

				int32_t val1 = eval(p, op - 1);
        int32_t val2 = eval(op + 1, q); 
        switch (tokens[op].type) {
            case '+': return val1 + val2;
            case '-': return val1 - val2;
            case '*': return val1 * val2;
            case '/': return val1 / val2;
            case TK_EQ: return val1 == val2;
            case TK_NEQ: return val1 != val2;
            case TK_AND: return val1 && val2;
						case TK_OR: return val1 || val2;
            default: assert(0);
        }
    }

    return 0;
}


int32_t expr(char *e, bool *success) {
	if (!make_token(e)) {
    *success = false;
    return 0;

	
	}
	printf("aftermaketoken nr_token=%d\n",nr_token);

  /* TODO: Insert codes to evaluate the expression. */
  
	
  return eval(0,nr_token-1);
}
