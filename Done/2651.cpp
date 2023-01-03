#include <iostream>
int main()
{
	std::ios::sync_with_stdio(false);
	std::string zorldo;
	std::getline(std::cin, zorldo);
	int cond = 0;
	for(int i = 0; i < zorldo.size(); i++)
	{
		if((zorldo[i] == 'z' || zorldo[i] == 'Z')  && cond == 0)
		{
			cond++;	
		}
		else if((zorldo[i] == 'z' || zorldo[i] == 'Z') && cond != 0)
		{
			cond = 1;
		}
		else if((zorldo[i] == 'e' || zorldo[i] == 'E') && cond == 1)
		{
			cond++;	
		}
		else if((zorldo[i] == 'l' || zorldo[i] == 'L') && cond == 2)
		{
			cond++;	
		}
		else if((zorldo[i] == 'd' || zorldo[i] == 'D') && cond == 3)
		{
			cond++;	
		}
		else if((zorldo[i] == 'a' || zorldo[i] == 'A') && cond == 4)
		{
			std::cout << "Link Bolado" << std::endl;
			return 0;	
		}
		else
		{
			cond = 0;
		}
	}
	std::cout << "Link Tranquilo" << std::endl;
	return 0;
}