/*recussive function
#include<stdio.h>

int fact(int n)
{
if (n==1)
return 1;
else 
return n*fact(n-1);
}
int main()
{
int R,n;
printf("Enter a number\n");
scanf("%d",&n);
R=fact(n);
printf("%d\n",R);
}
*/
//recussive function
#include<stdio.h>
int fact(int n);
int main()
{
int n;
long R;
printf("Enter a number\n");
scanf("%d",&n);
R=fact(n);
printf("%ld\n",R);
return 0;
}

int fact(int n)
{
if (n==1)
return 1;
else 
return n*fact(n-1);
}

