#include <iostream>
#include <iomanip>
int main()
{
	double potato[] = {4, 4.5, 5, 2, 1.5};
	int sel[2];
	std::cin >> sel[0] >> sel[1];
	std::cout << std::fixed << std::setprecision(2) << "Total: R$ " << potato[sel[0]-1]*sel[1] << std::endl;
}