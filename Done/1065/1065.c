#include <stdio.h>
int main()
{
    unsigned int even = 0;
    for(int i = 0; i < 5; i++)
    {
        int N;
        scanf(" %d", &N);
        even += !(N % 2);
    }
    printf("%d valores pares\n", even);
    return 0;
}