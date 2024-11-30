#include<stdio.h>
void sum();
int main()
{
int a,b;
printf("Enter two numbers\n");
scanf("%d%d",&a,&b);
sum();
}
void sum()
{
int s,a,b;
s=a+b;
printf("%d",s);
}
