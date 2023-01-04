#include<stdio.h>
void main()
{
	int line, l=0, c=0;
	float m[12][12], res = 0.0;
	char OP;
	scanf("%d\n", &line);
	scanf("%c\n", &OP);
	for(; l < 12; l++)
	{
		for(c=0; c < 12; c++)
		{
			scanf("%f\n", &m[l][c]);
		}
	}
	for(c=0; c<12;c++)
	{
		res+=m[line][c];
	}
	if(OP == 'S') printf("%.1f\n", res);
	if(OP == 'M') printf("%.1f\n", (res/12.0));
}