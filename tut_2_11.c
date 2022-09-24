// 11. Design a program to swap values of two variables using call by values and call by 
// reference.
// call by values
#include <stdio.h>

int main()
{
   int a, b;

   printf("Input two integers (a & b) to swap\n");
   scanf("%d%d", &a, &b);

   a = a + b;
   b = a - b;
   a = a - b;

   printf("a = %d\nb = %d\n",a,b);
   return 0;
}
