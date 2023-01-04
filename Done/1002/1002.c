#include <stdio.h>
 
int main() 
{
    double pi = 3.14159, radius;
    scanf("%lf", &radius);
    printf("A=%.4lf\n", pi*radius*radius);
    return 0;
}