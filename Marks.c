#include <stdio.h>
int display(int marks[],int n);
int main()
{
int i,n;
printf("enter no of arrays\n");
scanf("%d",&n);
int marks[n];
printf("enter the arrays\n");
for(i=0;i<n;i++)
{
scanf("%d",&marks[i]);
}
display(marks,n);
}
int display(int marks[],int n)
{
int i,sum;
sum =0;
float avg;
for(i=0;i<5;i++)
{
sum=sum+marks[i];
}
avg = sum/n;
printf("\navg of sum is :%f\n",avg);
}
