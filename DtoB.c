#include<stdio.h>
#include <math.h>
long DtoB(int deci);
int main()
{
int deci;
printf("Enter a decimal no\n");
scanf("%d",&deci);
long DtoB(int deci);
printf("Equivalent Binary Number is: %ld", DtoB(deci));
}
long DtoB(int deci)
{
long bina=0;
int rem,temp=1;
while (deci!=0)
{
rem = deci%2;
deci /=2;
bina=bina+temp*rem;
temp=temp*10;
}
return(bina);
}
