#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() 
{
    double a, b, c, S;
    cin >> a >> b >> c;
    if((a + b > c && a + c > b && b + c > a))
    {
        cout << fixed << setprecision(1) << "Perimetro = " << a+b+c << endl;
    }
    else cout << fixed << setprecision(1) << "Area = " << (a+b)*c/2 << endl;
    return 0;
}