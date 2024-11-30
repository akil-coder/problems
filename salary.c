#include<stdio.h>
int main()
{
float h,r,w,salary;
printf("no of hours worked in a week is:\n");
scanf("%f",&h);
printf("rate per hour is\n");
scanf("%f",&r);
printf("no of weeks in a month\n");
scanf("%f",&w);
salary=h*r*w;
printf("salary of this month is:%f\n",salary);
} 
