

//3. Swap 2 number using bitwise operator


#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two number :");
    scanf("%d%d",&a,&b);
    printf("Before swaping : a = %d , b = %d \n ",a,b);
    int i=0;
    do
    {
       a = a ^ b;
       b = a ^ b;
       a = a ^ b;
       i++;
    }
    while(i < 1);
    printf("After swaping : a = %d,b = %d\n ",a,b);
    return 0;

}