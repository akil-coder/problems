#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;
float D,roots,root1,root2;
printf("enter the values of a,b,c\n");
scanf("%d%d%d",&a,&b,&c);
D=b*b-4*a*c;
switch ((D>0) ? 1 : (D==0) ? 0 : -1 )
{case 1:
root1=(-b+sqrt(D))/(2*a);
root2=(-b-sqrt(D))/(2*a);
printf("your roots are %f,%f\n",root1,root2);
break;
case 0:
roots=-b/2*a;
printf("your roots are %f,%f\n",roots,roots);
break;
case -1:
printf("your roots are imaginary\n");
break;
default :
printf("invalid input\n");
}}
