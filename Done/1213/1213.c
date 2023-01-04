#include <stdio.h>
int main()
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        int S=1, res=1;    
        while(S % n != 0)
        {
            S = (S*10 + 1) % n;
            res++;
        }
       printf("%d\n", res);
    }
    return 0;
}