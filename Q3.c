#include<stdio.h>
int main()
{
int a,b;
printf("enter the range\n");
scanf("%d%d",&a,&b);
int i=1,r=1;
while (a<=b)
{
if (i<=a)
{r=i*r;
i++;
}
printf("factorial of %d is %d\n",a,r);
a++;
}}
