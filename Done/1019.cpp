#include<iostream>
int main()
{
    int S;
    std::cin >> S;
    int mod3600 = S % 3600;
    int mod60 = mod3600 % 60;
    std::cout << S/3600 << ":" << mod3600/60 << ":" << mod60 << std::endl; 
}