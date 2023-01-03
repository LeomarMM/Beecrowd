#include<iostream>
int max(int A, int B)
{
    return A > B ? A:B;
}
int main()
{
    int A,B,C;
    std::cin >> A >> B >> C;
    std::cout << max(max(A,B),C) << " eh o maior\n";
}