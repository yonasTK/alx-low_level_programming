#include <stdio.h>

/**
 *main - print alphabet reversed using putchar
 *Return: Always 0 (Success)
 */

int main(void)
{
char low_alpha = 'z';

while (low_alpha >= 'a')
{
putchar(low_alpha);
low_alpha--;
}
putchar('\n');
return (0);
}
