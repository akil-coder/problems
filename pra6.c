#include<stdio.h>
int main()
{
/*Read average marks and find the grade based on the following conditions: Avg marks >
80 => A grade Avg marks > 60 and <= 80 => B grade Avg marks > 40 and <= 60 => C
grade Avg marks <= 40 => F grade*/
int grade;
printf("enter yiur grade\n");
scanf("%d",&grade);
if (grade > 80)
{
printf("you got A grade\n");
}
else if ((grade > 60) && (grade <= 80))
{
printf("you got B grade\n"); }
else if ((grade > 40) && (grade <=60))
{
printf("you got C grade\n");
}
else 
printf("you got F grade\n"); 
}
