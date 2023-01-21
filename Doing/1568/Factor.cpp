#include <cstdint>
#include <cstdio>
#include <map>
#include <vector>

using namespace std;

constexpr uint64_t MAX_PRIME_RANGE{30000001};
bool isNotPrime[MAX_PRIME_RANGE]{};
uint64_t primes[MAX_PRIME_RANGE]{};

void startSieve();

int main()
{
    int64_t num{};
    startSieve();
    while(scanf())
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

    primes[0] = 2;
    size_t i = 1;

    for (size_t j = 3; j < MAX_PRIME_RANGE; j+=2) 
    {
        if (!isNotPrime[j]) 
        {
            primes[i] = j;
            ++i;
        }
    }
}