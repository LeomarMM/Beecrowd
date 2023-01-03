#include <iostream>
#include <utility>

using namespace std;

void sort(double &a, double &b, double &c);

int main()
{
    double A, B, C;
    ios_base::sync_with_stdio(false);
    cin >> A >> B >> C;
    sort(A, B, C);
    if(A >= B+C) cout << "NAO FORMA TRIANGULO\n";
    else
    {
        double S = B*B+C*C;
        double A2 = A*A;
        if(A2 == S) cout << "TRIANGULO RETANGULO\n";
        else if(A2 > S) cout << "TRIANGULO OBTUSANGULO\n";
        else cout << "TRIANGULO ACUTANGULO\n";
        
        if(A == B && B == C) cout << "TRIANGULO EQUILATERO\n";
        else if(A == B || B == C || A == C) cout << "TRIANGULO ISOSCELES\n";
    }
    return 0;
}

void sort(double &a, double &b, double &c)
{
    if(a < b) swap(a, b);
    if(b < c) swap(b, c);
    if(a < b) swap(a, b);
}