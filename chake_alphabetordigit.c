// W.A.C.P to check whether a character is alphabet, digi or special character.
#include<stdio.h>
#include<ctype.h>
int main()
{
char ch;
printf("Enter a character :");
scanf("%c",&ch);
if(isalpha(ch)){
    printf("%c is alphabet \n",ch);
}
else if(isdigit(ch)){
    printf("%c is digit \n",ch);
}
else{
    printf("%c is a special character \n ",ch);
}
return 0;
}