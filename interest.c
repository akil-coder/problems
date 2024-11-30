#include<stdio.h>
int main()
{
float p,r,t,SI;
printf("enter the values of principle,rate of interest,time\n");
scanf("%f%f%f",&p,&r,&t);
SI=(p*r*t)/100;
printf("simple interest is:%f",SI);
}
