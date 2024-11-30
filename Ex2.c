#include<stdio.h>
#include<math.h>
int main()
{
int a,l,b,reverse,n,e;
printf("Enter a no\n");
scanf("%d",&b);
a=b;
while(a>0)
{
l=a%10;
a=a/10;
e=((int)log10(b))-1;
n=l*(pow(10,e));
reverse+=n;
}
printf("%d\n",reverse);
}
//12344
//44321
