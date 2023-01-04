#include<iostream>
#include<iomanip>
int main()
{
    double A,B,C;
    std::cin >> A >> B >> C;
    std::cout << std::fixed << std::setprecision(3) 
    << "TRIANGULO: " << (A*C)/2.0 << std::endl
    << "CIRCULO: " << (3.14159*C*C) << std::endl
    << "TRAPEZIO: " << ((A+B)*C)/2.0 << std::endl
    << "QUADRADO: " << B*B << std::endl
    << "RETANGULO: " << A*B << std::endl;
}