#include<stdio.h>
int main()
{
int i,hour,minute;
printf("enter the interger to be converted in to hours and minutes\n");
scanf("%d",&i);
hour=i/3600;
minute=i/60;
printf("hour and minute:%d:%d\n",hour,minute);
}
