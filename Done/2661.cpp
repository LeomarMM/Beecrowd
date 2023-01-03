#include <iostream>
#include <cmath>
int countPrimeDivisors(long long);
int nChoosek(long long, long long);
int main()
{
    long long input;
    int k, i, result = 0;
    std::cin >> input; 
    k = countPrimeDivisors(input);
    result = 0;
    for(i = 2; i <= k; i++) result += nChoosek(k, i);  
    std::cout << result << "\n";
    return 0;  
}
int countPrimeDivisors(long long number)
{  
    int c=0;
    long long i;
    if(number % 2 == 0)
    {
        while(number % 2 == 0) number /= 2;
        c++;
    } 
    for(i = 3; i*i<number; i+=2)
    {
        bool div = false;
        while(number % i == 0) 
        {
            number /= i; 
            div |= true;
        }   
        c += (int)div;
    }
    if(number > 1) c++;
    if(c==1) return 0;
    else return c;
}
int nChoosek(long long n, long long k)
{
    long long res=1, a, div = 1;
    for(a = n; a > k; a--) res*=a;
    for(a = (n-k); a > 1; a--) div*=a;
    return (int)(res/div);
}