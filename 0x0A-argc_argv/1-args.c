#include <stdio.h>
#include "main.h"

/**
 * main - print the program name
 * @argc: count arguments
 * @argv: arguments
 *
 * Return: always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
printf("%i\n", argc - 1);

return (0);
}
