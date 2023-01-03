#include <iostream>
void printPrimeDivisors(long long);
int main()
{
    long long input = -1;
    while(true)
    {
        std::cin >> input; 
        if(input == 0) break;
        std::cout << input << " = ";
        printPrimeDivisors(input);
        std::cout << "\n";
    }
    return 0;  
}
void printPrimeDivisors(long long number)
{  
    long long i;
    bool first = true;
    if(number % 2 == 0)
    {
        while(number % 2 == 0) number /= 2;
        std::cout << 2;
        first = false;        
    } 
    for(i = 3; i*i < number; i+=2)
    {
        bool div = false;
        while(number % i == 0) 
        {
            number /= i; 
            div |= true;
        }   
        if(div)
        {
            if(first) 
            {
                std::cout << i;
                first = false;
            }
            else std::cout << " x " << i;
        }
    }
    if(number > 1) 
    {
        if(first) std::cout << number;
        else std::cout << " x " << number;
    }
}