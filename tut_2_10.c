// 10. Develop a program to demonstrate a function that returns structure
#include <stdio.h>
#include <string.h>
struct st_record
{
    int rno;
    char stname[25];
    float per;
};
struct st_record print_student_record(struct st_record st);
int main()
{
    struct st_record st1, st;
    // struct st_record *p;
    printf("Enter Roll Number: ");
    scanf("%d", &st1.rno);
    printf("Enter Student Name: ");
    scanf("%s", st1.stname);
    printf("Enter Percentage: ");
    scanf("%f", &st1.per);
    printf("Roll Number:: %d\n", st1.rno);
    printf("Student Name:: %s\n", st1.stname);
    printf("Percentage::%f\n", st1.per);
    // print_student_record(&st1);
    st = print_student_record(st1);
    printf("Roll Number:: %d\n", st.rno);
    printf("Student Name:: %s\n", st.stname);
    printf("Percentage::%f\n", st1.per);
    return 0;
}

struct st_record print_student_record(struct st_record st)
{
    st.rno = 3;
    strncpy(st.stname, "hello", 25);
    st.per = 23.45;
    return st;
}