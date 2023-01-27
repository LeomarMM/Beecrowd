#include <stdio.h>
 
int main() 
{
    int c = 0;
    for(int i = 0; i<6; i++) 
    {
        float tmp;
        scanf("%f", &tmp);
        if(tmp > 0) c++;
    }
    printf("%d valores positivos\n", c);
    return 0;
}