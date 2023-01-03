#include <iostream>
 
using namespace std;
 
int main() 
{
    int a, b, c;
    ios_base::sync_with_stdio(false);
    cin >> a >> b;
    cout << "O JOGO DUROU " << b-a+(a>=b ? 24:0) << " HORA(S)\n";
    return 0;
}