#include <iostream>
int main()
{
	std::ios::sync_with_stdio(false);
	int c;
	std::cin >> c;
	for (; c>0; c--)
	{
		int count[231], ps;
		bool first = true;
		for (int i = 0; i < 231; i++) count[i] = 0;
		std::cin >> ps;
		for (;ps>0; ps--)
		{
			int a;
			std::cin >> a;
			count[a]++;
		}
		for (int j = 0; j < 231; j++)
		{
			for (int k = 0; k < count[j]; k++)
			{
				if (first)
				{
					first = false;
					std::cout << j;
				}
				else std::cout << " " << j;
			}
		}
		std::cout << std::endl;
	}
}