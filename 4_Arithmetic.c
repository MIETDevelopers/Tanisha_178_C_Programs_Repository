//Creation date: 16-03-21
#include<stdio.h>
int main(){
    char operator;
    double a, b;
    printf("Enter an operator (+, -, *, /):");
    scanf("%c", &operator);
    printf("Enter two operands:");
    scanf("%lf %lf",&a, &b);
    switch(operator)
    {
        case '+':
            printf("%.lf + %.lf = %.lf",a, b, a+b);//Addition Function
            break;

        case '-':
            printf("%.lf - %.lf = %.lf",a, b, a-b);//Subtraction Function
            break;

        case '*':
            printf("%.lf * %.lf = %.lf",a, b, a*b);//Multiplication Function
            break;

        case '/':
            printf("%.lf / %.lf = %.lf",a, b, a/b);//Division Function
            break;
    printf("Error encountered by the input values");
    }
    return 0;
}