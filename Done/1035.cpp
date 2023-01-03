#include <iostream>
int main()
{
	std::ios_base::sync_with_stdio(false);
	int a,b,c,d;
	std::cin >> a >> b >> c >> d;
	if((b>c)&&(d>a)&&((c+d)>(a+b))&&(c>=0)&&(d>=0)&&(a%2==0)) std::cout << "Valores aceitos\n";
	else std::cout << "Valores nao aceitos\n";
}