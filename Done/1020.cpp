#include<iostream>
int main()
{
    int iD;
    std::cin >> iD;
    int mod365 = iD % 365;
    std::cout << iD/365 << " ano(s)\n" << mod365/30 << " mes(es)\n" << mod365%30 << " dia(s)\n";
}