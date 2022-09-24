// 2. Develop a program to demonstrate a program to pass pointer of array as an
// argument to function.
#include <stdio.h>
void swap(int *, int *);
int main()
{
   int a, b;
   printf("Enter the first number:");
   scanf("%d", &a);
   printf("Enter the second number:");
   scanf("%d", &b);
   swap(&a, &b);
   return 0;
}
void swap(int *a, int *b)
{

   printf("%d \n", *a);
   printf("%d", *b);
}