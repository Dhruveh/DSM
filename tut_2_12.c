// 12. Develop a program to insert an element in array in at a given position.
#include <stdio.h>
#include <conio.h>
int main()
{
    int array[100], position, c, n, value;

    printf("Enter number of elements in array\n");
        scanf("%d", &n);

    printf("Enter %d elements\n", n);

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    printf("Enter the location where you wish to insert an element\n");
        scanf("%d", &position);

    printf("Enter the value to insert\n");
        scanf("%d", &value);

    for (c = n; c > position; c--) // n-1 and position-1
        array[c] = array[c - 1];   // c+1 = c

    array[position] = value; // position-1

    printf("Resultant array is\n");

    for (c = 0; c <= n; c++)
        printf("%d\n", array[c]);

    return 0;
}
