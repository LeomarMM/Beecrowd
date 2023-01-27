#include <cstdio>
#include <cstdint>

float doTaxes(float gross);
int main()
{
    float X;
    scanf("%f", &X);
    if(X <= 2000.0) printf("Isento\n");
    else printf("R$ %.2f\n", doTaxes(X));
    return 0;
}

float doTaxes(float gross)
{
    constexpr float taxBracket[3] {0.08, 0.18, 0.28};
    constexpr float decrement[2] {1000, 1500};
    gross-=2000;
    float totalTaxes{};
    for(int i=0; ; i++)
    {
        if(i<2 && gross > decrement[i]) 
        {
            totalTaxes += decrement[i]*taxBracket[i];
            gross -= decrement[i];
        }
        else
        {
            totalTaxes += gross*taxBracket[i];
            break;
        }       
    }
    return totalTaxes;
}