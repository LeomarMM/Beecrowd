#include <cstdio>
int main() 
{
    int X;
    scanf("%d", &X);
    X = (X % 2 ? X : X+1);
    for(int i = 0; i < 6; i++)
        printf("%d\n", X + 2*i);
    return 0;
}