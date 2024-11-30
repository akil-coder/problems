#include<stdio.h>
int area();
int a;
int main()
{
int ar,pe;
printf("Enter the value of the side\n");
scanf("%d",&a);
area();
}
int area()
{
int pe,ar;
ar= a*a;
pe = 4*a;
printf("area of the square is:%d\n",ar);
printf("perimeter of the square is:%d\n",pe);
}
