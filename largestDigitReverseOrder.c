// Reverse largedigit number process the digit in reverse order using do,while
#include<stdio.h>
int main()
{
    int n,digit,largest=0;
    printf("Enter a number :");
    scanf("%d",&n);
    
    do{
        digit = n % 10;
        
        if(digit > largest)
        {
            largest = digit;
        }

        n = n/10;
    }
    while( n !=0);
    printf("The largest number is %d\n ",largest);
    return 0;
}