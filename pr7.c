#include<stdio.h>
int main()
{
char ch;
printf("en\n");
scanf("%c",&ch);
if (((ch >= 'a') && (ch <= 'z')) || ((ch >='A') && (ch <='Z')))
printf("char\n");
else if ((ch >='9')&&(ch<='9'))
printf("digit\n");
else 
printf("special\n");
}

