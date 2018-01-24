#include<stdio.h>
int main()
{
int h,m,min;
printf("enter the  minutes:");
scanf("%d",&min);
h=min/60;
m=min%60;
printf("hour:%d mints:%d",h,m);
return 0;
}
