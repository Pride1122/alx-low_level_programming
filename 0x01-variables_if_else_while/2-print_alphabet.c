#include <stdio.h>
/**
*main - program prints in lowercase followed by new line
*Return: 0 (You got it)
*/
int main(void)
{
char ch = 'a';
while (ch <= 'z')
{
if (ch != 'e' && ch != 'q')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
