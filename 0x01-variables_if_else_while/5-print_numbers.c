#include <stdio.h>

/**
 * main - Print all single digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int singl_digit;
for (singl_digit = 0; singl_digit < 10; singl_digit++)
{
printf("%i", singl_digit);
}
putchar('\n');

return (0);
}
