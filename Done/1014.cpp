#include<iostream>
#include<iomanip>
int main()
{
    int a;
    double b;
    std::cin >> a >> b;
    std::cout << std::fixed << std::setprecision(3) << a/b << " km/l" << std::endl;
}