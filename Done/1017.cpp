#include<iostream>
#include<iomanip>
int main()
{
    int a, b;
    std::cin >> a >> b;
    std::cout << std::fixed << std::setprecision(3) << a*b/12.0 << std::endl;
}