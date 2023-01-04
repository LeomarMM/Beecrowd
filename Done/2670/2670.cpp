#include<iostream>
int min(int A, int B)
{
    return A < B ? A:B;
}
int main()
{
    int a,b,c;
    std::cin >> a >> b >> c;
    int A, B, C;
    A = b*2 + c*4;
    B = a*2 + c*2;
    C = a*4 + b*2;
    std::cout << min(min(A,B),C) << "\n";
    return 0;
}