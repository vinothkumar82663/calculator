#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the firstnumber,operator and second number :");
    scanf("%d %c %d",&a,&op,&b);
    switch(op)
    {
    case '+':
        printf("\nResult is %d",a+b);
        break;
    case '-':
        printf("\nResult is %d",a-b);
        break;
    case '*':
        printf("\nResult is %d",a*b);
        break;
    case '/':
        printf("\nResult is %d",a/b);
        break;
    default:
        printf("\nEnter the valid operator");
    }
}
