#include <iostream>
#include <iomanip>
int main()
{
	double notas[4];
	std::cin >> notas[0] >> notas[1] >> notas[2] >> notas[3];
	double med = 0.2*notas[0]+0.3*notas[1]+0.4*notas[2]+0.1*notas[3];
	std::cout << std::fixed << std::setprecision(1);
	std::cout << "Media: " << med << std::endl;
	if(med >= 7) 
	{
		std::cout << "Aluno aprovado." << std::endl;
	}
	else if(med >= 5 && med < 7) 
	{
		std::cout << "Aluno em exame." << std::endl;
		double ex;
		std::cin >> ex;
		std::cout << "Nota do exame: " << ex << std::endl;
		med += ex;
		med /= 2;
		if(med >= 5) 
		{
			std::cout << "Aluno aprovado." << std::endl;
		}
		else std::cout << "Aluno reprovado." << std::endl;
		std::cout << "Media final: " << med <<std::endl;
	}
	else std::cout << "Aluno reprovado." << std::endl;
}