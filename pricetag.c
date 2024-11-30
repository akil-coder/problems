#include<stdio.h>
int main()
{
float p1,p2,p3,p4,p5,total_price;
printf("enter the price of each items\n");
scanf("%f%f%f%f%f",&p1,&p2,&p3,&p4,&p5);
/*printf("enter thr price of item1\n");
scanf("%f",&p1);
printf("enter the price of item2\n");
scanf("%f",&p2);
printf("enter the price of item3\n");
scanf("%f",&p3);
printf("enter thr price of item4\n");
scanf("%f",&p4);
printf("enter thr price of item5\n");
scanf("%f",&p5);*/
total_price=p1+p2+p3+p4+p5;
printf("price of item1 is:%f\n",p1);
printf("price of item2 is:%f\n",p2);
printf("price of item3 is:%f\n",p3);
printf("price of item4 is:%f\n",p4);
printf("price of item5 is:%f\n",p5);
printf("sum of all items=%f\n",total_price);
}
