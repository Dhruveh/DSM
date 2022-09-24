// 9. Develop a program to demonstrate a function that returns array.
#include <stdio.h>
#include <conio.h>
int ascending_order(int arr[], int n);
int main()
{
    int a[100], i, n;
    printf("Enter Size of array n::");
    scanf("%d", &n);
    printf("Enter elements of array\n");
    // fetch array elements form user
    for (i = 0; i < n; i++)
    {
        printf("Enter element %d::", i);
        scanf("%d", &a[i]);
    }
    ascending_order(a, n);
    return 0;
}

ascending_order(int arr[], int n)
{
    int i, j, temp;
    // sort Array
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print sorted array;;;;;
    printf("Sorted Array:::\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}