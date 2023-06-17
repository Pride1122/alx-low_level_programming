  1 #include <stdlib.h>
  2 #include <time.h>
  3 #include <stdio.h>
  4 /**
  5 *main-program assings number and checks whether positive or negative
  6 *Return: 0 (Successfully)
  7 */
  8 int main(void)
  9 { 
 10         int n;
 11
 12         srand(time(0));
 13         n = rand() - RAND_MAX / 2;
 14         if (n > 0)
 15                 printf("%d is positive\n", n);
 16         else if (n == 0)
 17                 printf("%d is zero\n", n);
 18         else if (n < 0)
 19                 printf("%d is negative\n", n);
 20         return (0);
 21 }
