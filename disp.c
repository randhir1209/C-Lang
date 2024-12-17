//W.A.C.P to read the value of an integer m and display the value of n is 1 when m is large than 0, when m is 0 and -1 when m is less than 0
// Conditionn : m>0==1,m==0=0,m<0=-1

#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter an integer value for m :");
    scanf("%d",&m);
    if(m > 0){
       n = 1;
    }
    else if(m == 0){
      n = 0;
    }
    else{
       n = -1;
    }
    printf("The value of n is : %d\n ",n);
  return 0;
}