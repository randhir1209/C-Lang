//enter arthematic operator from user perform operation on two numbers accoarding to the operator using ternary operator

#include<stdio.h>
int main()
{
    int a,b,r;
    char op;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    printf("Enter (+,-,*,/,% ) \n :");
    scanf("%c",&op);
    r=(op=='+')?(a+b) : (op=='-')?(a-b) :(op=='*')?(a*b) : (op=='/')?(a/b) :(op=='%')?(a%b) : 0;
    printf("The value after operator is : %d",r);
    return 0;
}