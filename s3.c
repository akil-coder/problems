//absolute value of a number
#include<stdio.h>
int absolute(int x);
int main()
{
int x;
float a;
printf("Enter a number\n");
scanf("%f",&a);
x=a;
absolute(x);
}
int absolute(int x)
{
printf("%d\n",x);
}
