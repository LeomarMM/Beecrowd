#include <iostream>
#include <iomanip>
using namespace std;
 
int main() 
{
    float s, r;
    int p;
    ios_base::sync_with_stdio(false);
    cin >> s;

    if(s <= 400.00) 
    {
        r = s*0.15;
        p = 15;
    }
    else if(s >= 400.01 && s <= 800.00) 
    {
        r = s*0.12;
        p = 12;
    }
    else if(s >= 800.01 && s <= 1200.00) 
    {
        r = s*0.10;
        p = 10;
    }
    else if(s >= 1200.01 && s <= 2000.00) 
    {
        r = s*0.07;
        p = 7;
    }
    else 
    {
        r = s*0.04;
        p = 4;
    }

    cout << std::fixed << std::setprecision(2) 
        << "Novo salario: " << s+r 
        << "\nReajuste ganho: " << r 
        << "\nEm percentual: " << p 
        <<" %\n";
    return 0;
}