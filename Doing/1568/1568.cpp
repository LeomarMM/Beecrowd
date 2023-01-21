#include <cstdio>
#include <cstdint>

constexpr uint64_t MAX_PRIME_RANGE{30000001};
bool isNotPrime[MAX_PRIME_RANGE]{};
uint64_t primes[MAX_PRIME_RANGE]{};

uint64_t countConsecutiveSums(uint64_t sum);
uint64_t searchValue(uint64_t val, uint64_t start, uint64_t end);

int main()
{
    uint64_t N;
    startSieve();
    while(scanf("%lu", &N) != EOF)
    {
        printf("%lu\n", countConsecutiveSums(N));
    }
}

uint64_t countConsecutiveSums(uint64_t sum)
{
    uint64_t counter{0};
    for(uint64_t i{1}; i<=sum; i++)
    {
        uint64_t src = searchValue(2*sum + i*(i-1), i, sum);
        counter += (src > 0);
    }
    return counter;
}

uint64_t searchValue(uint64_t val, uint64_t start, uint64_t end)
{
    if(start > end) return 0;
    uint64_t f = (start + end)/2;
    uint64_t F = f*(f+1);
    if(F == val) return f;
    if(val > F) return searchValue(val, f+1, end);
    return searchValue(val, start, f-1);
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