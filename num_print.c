#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}