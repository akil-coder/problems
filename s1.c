//even or odd function
#include<stdio.h>
int evenOdd(int x);
int main()
{
int x;
printf("Enter a number\n");
scanf("%d",&x);
evenOdd(x);
}
int evenOdd(int x)
{
if (x%2 == 0)
printf("It is a even number\n");
else 
printf("It is a odd number\n");
}
