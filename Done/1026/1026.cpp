#include <iostream>
using namespace std;

int main()
{
    uint32_t a,b;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(cin >> a >> b)
        cout << (a^b) << "\n";
    return 0;
}