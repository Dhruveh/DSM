// 11. Design a program to swap values of two variables using call by values and call by
// reference.
// call by reference
#include <stdio.h>

void swapnum(int *var1, int *var2)
{
    int tempnum;
    tempnum = *var1;
    *var1 = *var2;
    *var2 = tempnum;
}
int main()
{
    int num1 = 35, num2 = 45;
    printf("Before swapping:");
    printf("\nnum1 value is %d", num1);
    printf("\nnum2 value is %d", num2);

    /*calling swap function*/
    swapnum(&num1, &num2);

    printf("\nAfter swapping:");
    printf("\nnum1 value is %d", num1);
    printf("\nnum2 value is %d", num2);
    return 0;
}