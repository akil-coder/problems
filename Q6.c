#include<stdio.h>
#include<math.h>
int main()
{
int num,D2,D1,f,m,l,swap;
printf("enter a number\n");
scanf("%d",&num);
//12345
D2=(int)log10(num);
D1=pow(10,D2);
f=num/D1;
l=num%10;
m=(num%D1)/10;
swap=(l*D1) + (m*10) + f ;
if (swap==num)
printf("the number is same\n");
else
{printf("the number is not same\n");
}
printf("%d\n",swap);
}
