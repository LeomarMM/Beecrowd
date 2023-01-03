#include<iostream>
#include<iomanip>
int main()
{
    double a, b;
    char c[256];
    std::cin >> c >> a >> b;
    std::cout << std::fixed << std::setprecision(2) <<  "TOTAL = R$ " << a + 0.15*b << std::endl;
}