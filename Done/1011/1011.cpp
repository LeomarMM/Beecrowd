#include<iostream>
#include<iomanip>
int main()
{
    const double PI = 3.14159;
    double R, res=0.0;
    std::cin >> R;
    res = (4.0/3.0)*PI*R*R*R;
    std::cout << std::fixed << std::setprecision(3) <<  "VOLUME = " << res << std::endl;
}