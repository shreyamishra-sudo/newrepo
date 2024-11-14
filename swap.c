#include<stdio.h>
void main()
{
    printf("Enter two numbers:\n");
    scanf("%d%d", &a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swapped numbers are:\na=%d, b=%d",a,b);
}