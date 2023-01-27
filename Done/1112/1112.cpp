#include <cstdio>
#include <cstdint>
#include <map>
#include <unordered_map>

using namespace std;
typedef unordered_map<uint16_t, map<uint16_t, uint16_t>> problemType;
uint32_t presentCost(problemType& field, uint16_t cost, uint16_t sX, uint16_t sY, uint16_t fX, uint16_t fY);
int main()
{
    while(true)
    {
        uint16_t X, Y, P, Q;
        scanf("%hd %hd %hd", &X, &Y, &P);
        if(X == 0 && Y == 0 && P == 0) break;
        scanf("%hd", &Q);
        problemType field;
        for(int i = 0; i<Q; i++)
        {
            char a;
            uint16_t b, c, d;
            scanf(" %c %hd %hd %hd", &a, &b, &c, &d);
            if(a == 'A') field[c][d] += b;
            else
            {
                uint16_t e;
                scanf("%hd", &e);
                printf("%d\n", presentCost(field, P, b, c, d, e));
            }
        }
        printf("\n");
    }
    return 0;
}
uint32_t presentCost(problemType& field, uint16_t cost, uint16_t sX, uint16_t sY, uint16_t fX, uint16_t fY)
{
    uint32_t totalSchweisen{};
    uint16_t csX = (sX < fX ? sX : fX), 
    cfX = (sX > fX ? sX : fX), 
    csY = (sY < fY ? sY : fY), 
    cfY = (sY > fY ? sY : fY);
    for(int xKey = csX; xKey <= cfX; xKey++)
    {
        if(field.count(xKey))
        {
            for(auto& yValues : field[xKey])
            {
                if(yValues.first < csY) continue;
                if(yValues.first > cfY) break;
                totalSchweisen += yValues.second;
            }
        }
    }
    return totalSchweisen * cost;
}