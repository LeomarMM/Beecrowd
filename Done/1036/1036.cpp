#include <iostream>
#include <iomanip>
#include <cmath>
int main()
{
	std::ios_base::sync_with_stdio(false);
	double a,b,c;
	std::cin >> a >> b >> c;
	if(a == 0) 
	{
		std::cout << "Impossivel calcular\n";
	}
	else
	{
		double res[2], delta;
		delta = b*b - 4*a*c;
		if(delta < 0) std::cout << "Impossivel calcular\n";
		else
		{
			res[0] = (-b+sqrt(delta))/(2*a); 
			res[1] = (-b-sqrt(delta))/(2*a); 
			std::cout << std::fixed << std::setprecision(5) << "R1 = " << res[0] << std::endl << "R2 = " << res[1] << std::endl;
 		}
	}
}