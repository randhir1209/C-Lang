#include<stdio.h>
int main()
{
    int n,i,cube;
    printf("Enter number to display cube :");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        cube = i*i*i;
        printf("Cube of %d : %d\n",i,cube);
    }
    return 0;
}