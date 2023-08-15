//Calculator making
#include<stdio.h>
double add(double a,double b)
{
    return a+b;
}
double subtract(double a,double b)
{
    return a-b;
}
double multiply(double a,double b)
{
    return a*b;
}
double divide(double a,double b)
{
    return a/b;
}
int main()
{
    double num1,num2,result;
    int sign;
    printf("****CALCULATOR****\n");
    printf("Enter first number : ");
    scanf("%lf",&num1);
    printf("Enter second number :");
    scanf("%lf",&num2);
    printf("Enter sign for operation (1)+ (2)- (3)* (4) /:");
    scanf("%d",&sign);

    switch(sign)
    {
    case 1:
        {
            result=add(num1,num2);
             printf("RESULT : %lf ",result);
            break;
        }
    case 2:
        {
            result=subtract(num1,num2);
             printf("RESULT : %lf ",result);
            break;
        }
    case 3:
        {
            result=multiply(num1,num2);
             printf("RESULT : %lf ",result);
            break;
        }
    case 4:
        {
            result=divide(num1,num2);
             printf("RESULT : %lf ",result);
            break;
        }
    default:
        {
            printf("Invalid choice!");
            break;
        }
    }
}

