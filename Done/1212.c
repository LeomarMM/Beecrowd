#include <stdio.h>
int main() 
{
    unsigned int a, b;
    while(1)
    {
        unsigned short ra = 0, rb = 0, carries = 0, carried = 0;

        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) break;

        while(a || b)
        {
            ra = a % 10;
            rb = b % 10;
            a /= 10;
            b /= 10;
            carried = (ra+rb+carried >= 10);
            carries += carried;
        }

        if(carries == 0) printf("No carry operation.\n");
        else if(carries == 1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n", carries);
    }
    return 0;
}