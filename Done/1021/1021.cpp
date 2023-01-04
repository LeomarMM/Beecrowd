#include<iostream>
#include<iomanip>
int main()
{
    double val[] = {100, 50, 20, 10, 5, 2, 1, 0.50, 0.25, 0.10, 0.05, 0.01, -1};
    double a;
    int b=0;
    std::cin >> a;
    a+=0.001;
    std::cout << "NOTAS:\n";
    for(int i = 0; i < 12; i++)
    {
        b = a/val[i];
        a-=b*val[i];
        if(val[i] > 1) std::cout << std::fixed << std::setprecision(2) << b << " nota(s) de R$ " << val[i] << std::endl;
        else std::cout << std::fixed << std::setprecision(2) << b << " moeda(s) de R$ " << val[i] << std::endl;
        if(val[i+1] == 1) std::cout << "MOEDAS:\n";
    }
}