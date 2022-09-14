#include <stdio.h>
/**
 * main - Jack Bauer
 * Return: Jack Bauer
*/
int main(void)
{
	unsigned long int i, h, g, h1, h2, g1, g2;
	h = 1;
	g = 2;
	printf("%lu", h);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", g);
		g = g + h;
		h = g - h;
}
	h1 = h / 1000000000;
	h2 = h % 1000000000;
	g1 = g / 1000000000;
	g2 = g % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", g1 + (g2 / 1000000000));
		printf("%lu", g2 % 1000000000);
		g1 = g1 + h1;
		h1 = g1 - h1;
		g2 = g2 + h2;
		h2 = g2 - h2;
	}
	printf("\n");
	return (0);
}
