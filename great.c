#include<stdio.h>
int main()
{
int a,b,c;
printf("enter any three no\n");
scanf("%d%d%d",&a,&b,&c);
if ((a>b) && (a>c))
{
printf("%d is greatest\n",a);
printf("end of the if block");
}
else if ((b>a) && (b>c))
printf("%d is greatest\n",b);
else
printf("%d is greatest\n",c);
printf("end of the program");
}
