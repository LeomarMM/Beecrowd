#include <stdio.h>
int main()
{
    int val[] = {100, 50, 20, 10, 5, 2, 1};
    int a, b=0;
    scanf("%d", &a);
    printf("%d\n", a);
    for(int i = 0; i < 7; i++)
    {
        while(a >= val[i]) 
        {
            a-=val[i];
            b++;
        }
        printf("%d nota(s) de R$ %d,00\n", b, val[i]);
        b=0;
    }
}