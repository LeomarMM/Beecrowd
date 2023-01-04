#include<iostream>
#include<iomanip>
int main()
{
    int a, b;
    double c, res=0.0;
    for(int i = 0; i<2; i++)
    {
        std::cin >> a >> b >> c;
        res+=b*c;
    }
    std::cout << std::fixed << std::setprecision(2) <<  "VALOR A PAGAR: R$ " << res << std::endl;
}