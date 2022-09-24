// 4. Develop a program to display sum of an array elements using Dynamic Memory
// Allocation functions.
#include <stdio.h>

int main()
{
    int *ptr;  // declaration of integer pointer
    int limit; // to store array limit
    int i;     // loop counter
    int sum;   // to store sum of all elements

    printf("Enter limit of the array: ");
    scanf("%d", &limit);

    // declare memory dynamically
    ptr = (int *)malloc(limit * sizeof(int));

    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    // read array elements
    for (i = 0; i < limit; i++)
    {
        printf("Enter element %02d: ", i + 1);
        scanf("%d", (ptr + i));
    }

    // print array elements
    printf("\nEntered array elements are:\n");
    for (i = 0; i < limit; i++)
    {
        printf("%d\n", *(ptr + i));
    }

    // calculate sum of all elements
    sum = 0; // assign 0 to replace garbage value
    for (i = 0; i < limit; i++)
    {
        sum += *(ptr + i);
    }
    printf("Sum of array elements is: %d\n", sum);

    // free memory
    free(ptr); // hey, don't forget to free dynamically allocated memory.

    // getch();
    return 0;
}