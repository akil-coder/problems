#include<stdio.h>
int main()
{
int i,hour,minute;
printf("enter the interger to be converted in to hours and minutes\n");
scanf("%d",&i);
hour=i/3600;
minute=i/60;
printf("hour:%d\n",hour);
printf("minute:%d\n",minute);
}
