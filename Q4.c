//Print the Fibonacci series upto n.
#include<stdio.h>
int main()
{
int n,a=0,b=1,sum=0;
printf("enter a number\n");
scanf("%d",&n);
while (sum <= n)
{
printf("%d ",a);
sum=a+b;
a=b;
b=sum;
}
}
