#include <stdio.h>
int main() 
{
    double a,b,c;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    printf("MEDIA = %.1lf\n", ((a*2.0)+(b*3.0)+(c*5.0))/10.0);
    return 0;
}