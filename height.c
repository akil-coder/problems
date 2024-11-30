#include<stdio.h>
int main()
{
int h;
printf("enter your height\n");
scanf("%d",&h);
if (h>160)
printf("you are tall\n");
else if (h>=130 && h<=160)
printf("you are medium\n");
else
printf("you are short\n");
}
