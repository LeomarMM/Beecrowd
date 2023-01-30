#include <cstdio>
#include <cstdint>
using namespace std;

constexpr uint64_t MAX_PRIME_RANGE{30000001};

uint64_t primes[MAX_PRIME_RANGE]{};
bool isNotPrime[MAX_PRIME_RANGE]{};

uint32_t countDivisors(uint64_t number);
void filterPowersOfTwo(uint64_t& num);
void startSieve();

int main()
{
    uint64_t N;
    startSieve();
    while(scanf("%llu", &N) != EOF)
    {
        filterPowersOfTwo(N);
        printf("%u\n", countDivisors(N));
    }
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

uint32_t countDivisors(uint64_t number)
{
    uint32_t divs{1};
    for(uint64_t i = 0; primes[i] != 0 && number != 0 && number != 1 && primes[i]*primes[i] <= number; i++)
    {
        uint32_t count{0};
        while(!(number % primes[i])) 
        {
            number /= primes[i];
            count++;
        }
        divs *= ++count;
    }
    if(number > 1) divs *= 2;
    return divs;
}

void filterPowersOfTwo(uint64_t& num)
{
    while(!(num & 1) && num != 0) num = num >> 1;
}