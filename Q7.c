#include<stdio.h>
int main()
{
int a,product=1;
printf("enter a number\n");
scanf("%d",&a);
while (a%5!=0)
{
product*=a;
printf("enter a number\n");
scanf("%d",&a);
}
printf("%d\n",product);
}
