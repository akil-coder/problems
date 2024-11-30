#include<stdio.h>
#include<math.h>
int main()
{
int d1,d2,f,m,cost;
float time;
printf("enter the distance between delhi to mumbai\n");
scanf("%d",&d1);
printf("enter the speed of the vechile\n");
scanf("%d",&d2);
time=d1/d2;
printf("enter the cost 1 litre fuel\n");
scanf("%d",&f);
printf("enter the mileage of your vechile\n");
scanf("%d",&m);
cost=(d1*f)/m;
printf("time of your journey in seconds is:%f\n",time);
printf("cost of the fuel is:%d\n",cost);
}
