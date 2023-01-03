#include <iostream>
int main()
{
	std::ios_base::sync_with_stdio(false);
	double a;
	std::cin >> a;
	if(a >= 0 && a<= 25) std::cout << "Intervalo [0,25]" << std::endl;
	else if(a>25 && a<=50) std::cout << "Intervalo (25,50]" << std::endl;
	else if(a>50 && a<=75) std::cout << "Intervalo (50,75]" << std::endl;
	else if(a>75 && a<=100) std::cout << "Intervalo (75,100]" << std::endl;
	else std::cout << "Fora de intervalo" << std::endl;
}