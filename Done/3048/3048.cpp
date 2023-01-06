#include <cstdio>
#include <cstdint>
int main() 
{    
    uint16_t N{};
    uint8_t pastval{};
    uint16_t marked{};
    scanf("%hd", &N);
    for(uint16_t i{}; i < N; i++)
    {
        uint8_t nval;
        scanf("%hhd", &nval);
        marked += (nval != pastval);
        pastval = nval;
    }
    printf("%d\n", marked);
    return 0;
}