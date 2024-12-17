#include<stdio.h>
#include<math.h>
int main()
{
 int a=1,b=1,n,c=1,i;
 printf("Enter number to print series :");
 scanf("%d",&n);
for( i=0;i<n;i++)
{
    c=c+a/pow(b,3);
    b=b+1;
}
printf("%d",c);
}