#include <iostream>
using namespace std;

int main()
{
    uint64_t N{};
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(true)
    {
        cin >> N;
        if(N == 0) break;
        cout << N*(N+1)*(2*N+1)/6 << "\n";
    }
    return 0;
}