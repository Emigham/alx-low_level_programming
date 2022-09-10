#include <stdio.h>
/**
 * main - the program rub from here
 *
 * Return:return zero if no error and non zero if error
 */
int main(void)
{
int alphabet;

alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
