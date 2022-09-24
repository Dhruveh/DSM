// 7. Develop a program to demonstrate passing structure as an argument to function.
#include <stdio.h>
#include <string.h>
struct st_record
{
    int rno;
    char stname[25];
    float per;
};
void print_student_record(struct st_record st);
int main()
{
    struct st_record st1;
    printf("Enter Roll Number: ");
    scanf("%d", &st1.rno);
    printf("Enter Student Name: ");
    scanf("%s", st1.stname);
    printf("Enter Percentage: ");
    scanf("%f", &st1.per);
    print_student_record(st1);
    return 0;
}

void print_student_record(struct st_record st)
{
    printf("Roll Number:: %d\n", st.rno);
    printf("Student Name:: %s\n", st.stname);
    printf("Percentage::%f\n", st.per);
}