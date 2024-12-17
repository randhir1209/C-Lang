//W.A.C.P to read temperature  in centigrade and display a suitable message according to the temperature state below
//temp < 0 then freazing weather 
//temp  0-10 very cold weather 
//temp 10-20 cold weather 
//temp 20-30 normal weather 
//temp 30-40 its hot
//temp >=40 its very hot
#include<stdio.h>
int main()
{
    float temp;
    printf("Enter temperature :");
    scanf("%f",&temp);
    if(temp <=0){
        printf("Freazing weather");
    }
    else if(temp >= 0 && temp <=10){
        printf("Very cold weather");
    }
    else if(temp >=10 && temp <=20)
    {
        printf("cold weather ");
    }
    else if(temp >= 20 && temp <=30){
        printf("Normal weather ");
    }
    else if(temp >= 30 && temp <=40 ){
        printf("Its hot ");
    }
    else {
        printf("Its very hot");
    }
return 0;
}