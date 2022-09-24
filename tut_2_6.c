// 6. Develop a program to demonstrate the concept of array of structure.
#include <stdio.h>
#include <conio.h>
#include <string.h>
struct student
{
    int r_no;
    char s_name[50];
    int marks[5];
};
int main()
{

    int n;
    printf("Enter number of student :");
    scanf("%d", &n);
    struct student s[n];
    int i, j;
    for (j = 0; j < n; j++)
    {
        printf("Enter R_no of s1 :");
        scanf("%d", &s[j].r_no);
        printf("enter name of s1 :");
        scanf("%s", s[j].s_name);
        for (i = 0; i < n; i++)
        {
            printf("Enter marks of subject %d :", i + 1);
            scanf("%d", &s[j].marks[i]);
        }
    }

    for (j = 0; j < n; j++)
    {
        printf("Details::::::::\n");
        printf("Student S-%d\n", j);
        printf("Roll number:::%d\n", s[j].r_no);
        printf("Name:::%s\n", s[j].s_name);
        for (i = 0; i < 5; i++)
        {
            printf(" marks of subject %d are %d\n", i + 1, s[j].marks[i]);
        }
    }
    return 0;
}