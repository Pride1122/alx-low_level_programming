#include <stdio.h>
/**
*main - prints alphabet in lowercase,then in uppercase,followed by a new line.
*Return: 0 (You got it)
*/
int main(void)
{
int ch;
for (ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for (ch = 'A'; ch <= 'Z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
