// 3. Create a structure named student that have member variable roll no, name and
// display structure elements using array of structure.
#include <stdio.h>
#include <string.h>

struct dk
{
    int roll_no;
    char name[15];
};
int main()
{
    struct dk s1[3];

    int i;
    // printf("Enter Roll_no & Name:");
    for (i = 0; i <= 2; i++)
    {
        printf("Enter roll_no:");
        scanf("%d", &s1[i].roll_no);
        printf("Enter Name:");
        scanf("%s", s1[i].name);
    }
    for (i = 0; i <= 2; i++)
    {
        printf("\nroll_no :%d", s1[i].roll_no);
        printf("\n");
        printf("Name :%s", s1[i].name);
    }
    // char name[];
    return 0;
}