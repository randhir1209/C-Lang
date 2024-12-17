// W.A.C.P to calculate and print the electricty bill of a given customer. the customer ID, NAME, and unit consumed by the user should be captured form the keyboard to display the total amount to be paid to the customer.

// The charge as  unit       charge/unit
                //upto 199   1.20
//200 above less than 400    1.50
                //400>=600   1.80
           //600 and above   2.0
//If bill exceed RS.400 than charge of 15% will be charged and the minimum bill should be of RS.100 

#include<stdio.h>
int main()
{
    int id;
    char name;
    float unit,bill;
    printf("Enter customer ID : ");
    scanf("%d",&id);
    printf("Enter Customer name :");
    scanf("%s",&name);
    printf("Enter unit :");
    scanf("%f",&unit);
    if(unit >=199)
    {
        bill=unit*1.20;
    }
    else if(unit >=200 && unit <=400){
        bill = unit*1.50;
    }
    else if(unit >=400 && unit<=600){
        bill=unit*1.80;
    }
    else {
        bill = unit*2.00;
    }
    if(bill<=100){
        bill=100;
    }
    if(bill>400){
        bill=bill+(bill*0.15);
    }
    printf("Total bill :%f\n",bill);
    printf("Customer ID : %d\n",id);
    printf("Customer name :%s\n",name);


}
