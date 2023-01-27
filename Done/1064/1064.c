#include <stdio.h>
 
int main() 
{
    int c = 0;
    float m = 0;
    for(int i = 0; i<6; i++) 
    {
        float tmp;
        scanf("%f", &tmp);
        if(tmp > 0) 
        {
            c++;
            m+=tmp;
        }
    }
    printf("%d valores positivos\n%.1f\n", c, m/c);
    return 0;
}