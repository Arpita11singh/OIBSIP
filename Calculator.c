#include<stdio.h>
int main ()
{
    char operator;
    double a,b;
    printf("Enter the operator you want to operate:-\t");
    scanf("%c",&operator);
    printf("Enter the number you want to calculate:-");
    scanf("%lf %lf",&a,&b);

    switch(operator)
    {
        case '+' :("%lf + %lf = %lf",a,b,a+b);
        break;
        case '-' :("%lf - %lf = %lf",a,b,a-b);
        break;
        case '*' :("%lf * %lf = %lf",a,b,a*b);
        break;
        case '/' :("%lf / %lg = %lf",a,b,a/b);
        break;
        default : ("The Given Operator is Invalid");
            }
            return 0;
}