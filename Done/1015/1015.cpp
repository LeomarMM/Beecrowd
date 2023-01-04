#include<iostream>
#include<iomanip>
#include<cmath>
int main()
{
    double x1,x2,y1,y2,dx,dy;
    std::cin >> x1 >> y1 >> x2 >> y2;
    dx = x2-x1;
    dy = y2-y1;
    std::cout << std::fixed << std::setprecision(4) << sqrt(dx*dx + dy*dy) << std::endl;
}