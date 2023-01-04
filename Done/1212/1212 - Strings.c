#include <stdio.h>
#include <string.h>
unsigned short handleInput(char *a, char *b);
int main() 
{
    char a[10], b[10];
    while(1)
    {
        unsigned short carries = 0, carried = 0;

        scanf("%s %s", &a[0], &b[0]);
        if(a[0] == '0' && b[0] == '0') break;
        unsigned short size = handleInput(a, b);
        for(int i = size-1; i >= 0; i--)
        {
            unsigned short sum = (a[i]+b[i]+carried);
            carried = (sum > 'i');
            carries += carried;
        }
        if(carries == 0) printf("No carry operation.\n");
        else if(carries == 1) printf("1 carry operation.\n");
        else printf("%d carry operations.\n", carries);
    }
    return 0;
}
unsigned short handleInput(char *a, char *b)
{
    char buffer[10];
    unsigned short aLength = strlen(a), bLength = strlen(b);
    
    if(aLength > bLength)
    {
        strcpy(buffer, b);
        sprintf(b, "%0*d%s", aLength-bLength, 0, buffer);
        return aLength;
    }
    else if(bLength > aLength)
    {
        strcpy(buffer, a);
        sprintf(a, "%0*d%s", bLength-aLength, 0, buffer);
        return bLength;
    }
    return aLength;
}