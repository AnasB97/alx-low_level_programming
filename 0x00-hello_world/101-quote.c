#include <unistd.h>

/**
 * main - print a quote using write method
 *
 * Return: 1 (not success)
 */

int main(void)
{
char q[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(1, q, 59);
return (1);
}
