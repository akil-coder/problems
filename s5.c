//decimal to binary conversion
#include<stdio.h>
int bin();
int main()
{
int x,d=1,m,t=1;
printf("Enter a number\n");
scanf("%d",&x);
bin(x);
}
bin()
int x,d=1,m,t=1;
while (d!=0)
{
long s=o;
d=x/2;
m=x%2;
s+=d*t;
t*=t*10;
}
printf("%ld",s);
}
