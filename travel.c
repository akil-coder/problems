#include<stdio.h>
#include<math.h>
int main()
{
int x1,y1,x2,y2,d;
printf("write the coordinates of the first place\n");
scanf("%d%d",&x1,&y1);
printf("write the coordinates of the second place\n");
scanf("%d%d",&x2,&y2);
d= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("distance between the two places is:%d\n",d);
}
