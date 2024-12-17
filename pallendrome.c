#include<conio.h>
#include<stdio.h>
void main()
{
    char a[20];
    int i,l;
    printf("Enter String :");
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l/2;i++)
    {
        if(a[i]!=a[l-1-i])
        {
            printf("Not Palindrome");
            break;
        }
    }
    if(i==l/2)
    {
        printf("Palindrome");
    }
    getch();
}