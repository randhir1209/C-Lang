#include<stdio.h>
int main()
{
    int n;
    printf("Enter month series :");
    scanf("%d",&n);
    if(n==1)
    {
        printf("January 31 Days");
    }
    else if(n==2)
    {
        printf("February 28/29 Days");
    }
     else if(n==3)
    {
        printf("March 31 Days");
    }
     else if(n==4)
    {
        printf("April 30 Days");
    }
     else if(n==5)
    {
        printf("May 31 Days");
    }
     else if(n==6)
    {
        printf("June 30 Days");
    }
     else if(n==7)
    {
        printf("July 31 Days");
    }
     else if(n==8)
    {
        printf("August 31 Days");
    }
     else if(n==9)
    {
        printf("September 31 Days");
    }
     else if(n==10)
    {
        printf("Oct 31 Days");
    }
     else if(n==11)
    {
        printf("Novermber  31 Days");
    }
     else if(n==12)
    {
        printf("December 31 Days");
    }
    else{
        printf("Wrong number!");
    }
    return 0;
}