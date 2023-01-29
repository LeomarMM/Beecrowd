#include <stdio.h>
int main()
{
    unsigned int even = 0, odd = 0, pos = 0, neg = 0;
    for(int i = 0; i < 5; i++)
    {
        int N;
        short int isOdd;
        scanf(" %d", &N);
        isOdd = N % 2;
        odd += isOdd;
        even += !isOdd;
        pos += (N > 0);
        neg += (N < 0);
    }
    printf("%d valor(es) par(es)\n", even);
    printf("%d valor(es) impar(es)\n", odd);
    printf("%d valor(es) positivo(s)\n", pos);
    printf("%d valor(es) negativo(s)\n", neg);
    return 0;
}