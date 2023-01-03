#include<stdio.h>
#include<stdlib.h>
#define OPLIST_SZ 5
typedef struct
{
    char operator;
    short associativity; //0-LEFT 1-RIGHT
    short precedence;
} operator;
operator List[OPLIST_SZ] = 
{  
    {.operator = '+', .associativity = 0, .precedence=1},
    {.operator = '-', .associativity = 0, .precedence=1},
    {.operator = '*', .associativity = 0, .precedence=2},
    {.operator = '/', .associativity = 0, .precedence=2},
    {.operator = '^', .associativity = 1, .precedence=3}
};
short isOperator(char op)
{
    int i;
    for(i=0; i<OPLIST_SZ; i++)
    {
        if(List[i].operator == op) return 1;
    }
    return 0;
}
operator* getOperator(char op)
{
    int i;
    for(i=0; i<OPLIST_SZ; i++)
    {
        if(List[i].operator == op) return &List[i];
    }
    return NULL;
}
char* postfix(char* input)
{
    char *result = malloc(sizeof(char)*300), opstack[300];
    int opc=0, rec=0, inc=0;
    short parenthesis = 0;
    while(input[inc] != 0)
    {
        if(isOperator(input[inc]))
        {
            // == MAGIC! == MAGIC! == MAGIC! == MAGIC! == MAGIC! ==
            operator a = *getOperator(input[inc]);
            int i;
            for(i = opc; i>0; i--)
            {
                if(opstack[i-1] != '(')
                {
                    operator b = *getOperator(opstack[i-1]);
                    if((a.associativity == 0 && a.precedence <= b.precedence) || (a.associativity == 1 && a.precedence < b.precedence))
                    {
                         result[rec] = b.operator;
                         rec++;
                         opstack[i-1] = '\0';
                         opc--;
                    }
                } else break;
            }
            opstack[opc] = a.operator;
            opc++;
            // == MAGIC! == MAGIC! == MAGIC! == MAGIC! == MAGIC! ==
        }
        else if(input[inc] == '(')
        {
            opstack[opc] = input[inc];
            opc++;
        }
        else if(input[inc] == ')')
        {
            while(opstack[opc-1] != '(')
            {
                result[rec] = opstack[opc-1];
                opc--;
                rec++;
            }
            opstack[opc] = 0;
            opc--;
        }
        else if(input[inc] != ' ')
        {
            result[rec] = input[inc];
            rec++;
        }
        inc++;
    }
    opc--;
    while(opc >=0)
    {
        result[rec] = opstack[opc];
        opc--;
        rec++;
    }
    result[rec] = 0;
    return result;	
}
void main()
{
    int heh; 
    char input[302], *res;
    scanf("%d", &heh);
    int i;
    for(i=0; i<heh; i++)
    {
        scanf("%s", input);
        res = postfix(input);
        printf("%s\n", res);
        free(res);
    }    
}