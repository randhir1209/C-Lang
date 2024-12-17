#include<stdio.h>
struct emp_detail
{
    char name[150];
    int id,year;
    float salary,bonuse;
}emp;
int main()
{
    int i;
    int n;
    printf("Enter the number of employee :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter employee Name :");
        scanf("%s",emp.name);
        printf("\n Enter Employee id :");
        scanf("%d",&emp.id);
        printf("\nEnter Salary year of Service :");
        scanf("%d",&emp.year);
        printf("\nEnter Emp_salary :");
        scanf("%f",&emp.salary);
    }
     if(emp.year>=5)
        {
            emp.bonuse=emp.salary*.1f;
        }
        else{
            printf("You are not work more than 5 years in this company");
        }
       for(i=0;i<n;i++)
       {
        printf("Employee name :%s\n",emp.name);
        printf("Employee id :%d\n",emp.id);
        printf("Employee salary :%.2f\n",emp.bonuse+emp.salary);
 }
    return 0;
}
