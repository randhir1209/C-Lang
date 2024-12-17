//Write a program in c to accept a grade and declare the equivlent description
//Grade                 Description
// E                    Excellent
// V                    Very good 
// G                    Good 
// A                    Average
// F                    Fail
#include<stdio.h>
int main()
{
    char gr;
    printf("Entr grade(E,V,G,A,F) :");
    scanf("%c",&gr);
    switch(gr){
        case e:
        {
            printf("Excellent");
            break;
        }
        case v :
        {
            printf("You have chosse :Very good");
            break;
        }
        case g :
        {
            printf("You have chosse :Good");
            break;
        }
        case a:
        {
            printf("You have chosse :Average");
            break;
        }
        case f :
        {
            printf("You have chosse :Fail");
            break;
        }
        default :
        {
            
        }

    }
}