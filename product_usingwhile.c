#include<stdio.h>
int main()
{
    int i=1,product=1;
    while(i<=5)
    {
        product = product*i;
        i++;
    }
    printf("Product of number : %d",product);
    return 0;
}