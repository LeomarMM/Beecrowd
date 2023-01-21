#include <cstdio>
#include <cmath>
#include <map>

int main()
{
    int cities{1};
    while(true)
    {
        int houses, totalC{}, totalP{};
        std::map<int, int> consumption;
        scanf("%d", &houses);
        if(!houses) break;
        else if(cities > 1) printf("\n");
        for(int i{}; i<houses; i++)
        {
            int pop, con, avg;
            scanf("%d %d", &pop, &con);
            totalC += con;
            totalP += pop;
            avg = con/pop;
            consumption[avg] += pop;
        }
        printf("Cidade# %d:\n", cities++);
        for(auto &mapItem : consumption)
        {
            printf("%d-%d%c", mapItem.second, mapItem.first, (&mapItem == &*consumption.rbegin() ? '\n' : ' '));
        }
        double tAvg = static_cast<double>(totalC)/totalP;
        printf("Consumo medio: %.2f m3.\n", floorf(100*tAvg)/100);
    }
    return 0;
}