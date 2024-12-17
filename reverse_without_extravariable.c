// Reverse number without using another variable using do,while
#include<stdio.h>
int main()
{
    int n,rev=0;
    printf("Enter number :");
    scanf("%d",&n);
    do{
        rev=rev*10+(n%10);
        n=n/10;
    }
    while(n !=0);
    printf("Reverse of %d =%d\n",rev);
    return 0;
}


