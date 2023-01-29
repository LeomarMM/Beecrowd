#include <cstdint>
#include <cstdio>
#include <vector>
using namespace std;

constexpr uint16_t MAX_PRIME_RANGE{20000};
bool isNotPrime[MAX_PRIME_RANGE]{};
void startSieve();

int main()
{
    int M;
    startSieve();
    while(scanf("%d", &M) != EOF)
    {
        vector<uint16_t> value(M);
        uint16_t hop;
        uint32_t sum{};
        for(int i = 0; i < M; i++) scanf("%hd", &value[i]);
        scanf("%hd", &hop);
        for(int i = M-1; i >= 0; i -= hop) sum += static_cast<uint32_t>(value[i]);
        if(isNotPrime[sum]) printf("Bad boy! I’ll hit you.\n");
        else printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
    }
    return 0;
}

void startSieve()
{
    isNotPrime[0] = true;
    isNotPrime[1] = true;
    for(size_t i = 2; i < MAX_PRIME_RANGE; i++)
    {
        if(isNotPrime[i]) continue;
        for(size_t j = i+i; j < MAX_PRIME_RANGE; j+=i)
            isNotPrime[j] = true;
    }
}