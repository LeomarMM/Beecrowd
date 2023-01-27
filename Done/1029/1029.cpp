#include <array>
#include <cstdio>
#include <cstdint>
#include <utility>

using namespace std;
array<int32_t, 40> 
fib{0, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1}, 
calls{0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
pair<int32_t, int32_t> fibonacci(uint8_t N);
int main()
{
    int N;
    scanf("%d", &N);
    for(int i{}; i<N; i++)
    {
        uint8_t X;
        scanf("%hhd", &X);
        auto Fibo = fibonacci(X);
        printf("fib(%hhd) = %d calls = %d\n", X, Fibo.first, Fibo.second);
    }
    return 0;
}
pair<int32_t, int32_t> fibonacci(uint8_t N)
{
    if(fib[N] == -1)
    {
        auto N1 = fibonacci(N-1), N2 = fibonacci(N-2);
        calls[N] = N1.first + N2.first + 2;
        fib[N] = N1.second + N2.second;
    }
    return {calls[N], fib[N]};
}