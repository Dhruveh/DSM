// 1. Develop a program to implement following Stack Operations 
// 1) Push 2) Pop 3) Peep 4) Change 5) Display
#include <stdio.h>
#include <string.h>
#define n 10
int top = 0;
int st[n];
int st_push(int);
int st_pop();
int st_peep(int);
int st_change(int, int);
void st_display();
int main()
{
    int ch, x, ind, rpindex, rpvalue;
    char con;
conti:
    printf("Press 1 for Push\n");

    printf("Press 2 for Pop\n");

    printf("Press 3 for Peep\n");

    printf("Press 4 for Change\n");

    printf("Press 5 for Display\n");

    printf("Enter your choice::\n");
    scanf("%d", &ch);

    switch (ch)
    {
    case 1:
    {
        printf("Enter Element you want to insert\n");
        scanf("%d", &x);
        st_push(x);
        break;
    }
    case 2:
    {
        st_pop();
        break;
    }
    case 3:
    {
        printf("Enter index you want to fetch\n");
        scanf("%d", &ind);
        st_peep(ind);
        break;
    }
    case 4:
    {
        printf("Enter index you want to replace\n");
        scanf("%d", &rpindex);
        printf("Enter value you want to replace\n");
        scanf("%d", &rpvalue);
        st_change(rpindex, rpvalue);
        break;
    }
    case 5:
    {
        st_display();
        break;
    }
    default:
    {
        printf("Enter valid choice\n");
    }
    }
    printf("Do you want to continue\n");
    printf("enter your choice (y/n)\n");
    fflush(stdin);
    scanf("%c", &con);
    if (con == 'y')
        goto conti;
    return 0;
}

int st_push(int x)
{
    if (top >= n)
    {
        printf("Overflow on stack \n");
        return 0;
    }
    top++;
    st[top] = x;
    printf("The new top value is %d \n", top);
    st_display();
    return 0;
}

int st_pop()
{
    if (top <= 0)
    {
        printf("underflow on stack \n");
        return 0;
    }
    printf("Element deleted from stack is %d \n", st[top]);
    top = top - 1;
    st_display();
    return 0;
}

int st_peep(int ind)
{
    if (top - ind + 1 <= 0)
    {
        printf("underflow on stack \n");
        return 0;
    }
    printf("%d th element from top of stack is %d \n", ind, st[top - ind + 1]);
    st_display();
    return 0;
}

int st_change(int ind, int replac)
{
    if (top - ind + 1 <= 0)
    {
        printf("underflow on stack \n");
        return 0;
    }
    st[top - ind + 1] = replac;
    printf("%d th element from top of stack is %d \n", ind, st[top - ind + 1]);
    st_display();
    return 0;
}

void st_display()
{
    int i;
    for (i = 1; i <= top; i++)

    {
        printf("%d th element from stack is %d \n", i, st[i]);
    }
}
