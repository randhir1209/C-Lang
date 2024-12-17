#include<stdio.h>
int main()
{
   float cp,sp,result; //ct = costprice ,  sp = sellingprice
    printf("Enter Buying Price : ");
    scanf("%f",&cp);
    printf("Enter Selling price :");
    scanf("%f",&sp);
    result = sp - cp;
if(result > 0)
{   
    printf("Profit =%f\n",result);
}
else if(result < 0)
{
    printf("Loss = %f\n",-result);
}
else{
   printf("No profit or No loss!\n"); 
}
return 0;
}

