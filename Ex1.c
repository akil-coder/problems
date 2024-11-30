#include<stdio.h>
int main()
{
int a,l;
printf("Enter a no\n");
scanf("%d",&a);
while(a>0)
{
l=a%10;
printf("%d\n",l);
a=a/10;
}
}
