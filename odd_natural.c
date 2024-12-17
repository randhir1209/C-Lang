#include<stdio.h>
int main()
{
    int n,i,odd,sum;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        odd = 2*i-1;
        printf("Odd numbers are :%d\n",odd);
         sum = sum+odd;
    }
    
    printf(" Sum of Odd numbers are :%d",sum);
    return 0;
}
