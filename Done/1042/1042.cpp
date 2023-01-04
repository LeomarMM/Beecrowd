#include <iostream>
using namespace std;
int main() 
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int b[3] = {a[0], a[1], a[2]};
    if(a[0] > a[1])
    {
        a[0] ^= a[1];
        a[1] ^= a[0];
        a[0] ^= a[1];
    }
    if(a[0] > a[2])
    {
        a[0] ^= a[2];
        a[2] ^= a[0];
        a[0] ^= a[2];
    }
    if(a[1] > a[2])
    {
        a[1] ^= a[2];
        a[2] ^= a[1];
        a[1] ^= a[2];
    }
    cout << a[0] << endl << a[1] << endl << a[2] << endl << endl;
    cout << b[0] << endl << b[1] << endl << b[2] << endl;
    return 0;
}