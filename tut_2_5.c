// 5. Develop a program to demonstrate the concept of array in structure.
#include <stdio.h>
#include <string.h>
struct student
{
    int r_no;
    char s_name[50];
    int marks[5];
};
int main()
{
    struct student s1;
    int i;
    printf("Enter R_no of s1 ::");
    scanf("%d", &s1.r_no);
    printf("enter name of s1 ::");
    scanf("%s", s1.s_name);
    for (i = 0; i < 5; i++)
    {
        printf("Enter marks of subject %d ::", i + 1);
        scanf("%d", &s1.marks[i]);
    }
    printf("Details ----->\n");
    printf("Student s1 ::\n");
    printf("Roll number:::%d\n", s1.r_no);
    printf("Name:::%s\n", s1.s_name);
    for (i = 0; i < 5; i++)
    {
        printf(" marks of subject %d are %d  \n", i + 1, s1.marks[i]);
    }
    return 0;
}