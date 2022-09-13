#include <stdio.h>
/**
 * main - Apples
 * Return: Apples
 */
int main(void)
{
	unsigned long int i, j, k, j1, j2, k1, k2;
	j = 1;
	k = 2;
	printf("%lu", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	j1 = j / 1000000000;
	j2 = j % 1000000000;
	k1 = k / 1000000000;
	k2 = k % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", k1 + (k2 / 1000000000));
https://github.com/EmmanuelEmp/alx-low_level_programming/commit/0667591d171642b52ed615180e0a193dd1080edb

