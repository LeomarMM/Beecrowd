#include <stdio.h>
const char* month[] = 
{
    "January", "February", "March", "April", 
    "May", "June", "July", "August", 
    "September", "October", "November", "December"
}; 
int main(void) 
{
    int N;
    scanf("%d", &N);
    printf("%s\n", month[N-1]);
    return 0;
}