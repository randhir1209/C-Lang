#include<stdio.h>
int main()
{
    int n,i,even,sum;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        even = 2*i;
        printf("Even number's are :%d\n",even);
        sum = sum+even;
    }
    printf("Sum of even number is : %d",sum);
    return 0;
}