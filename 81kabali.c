#include<stdio.h>
int main()
{
int kn,on,d;
printf("\n enter the kabali ninja count and opponent count:");
scanf("%d%d",&kn,&on);
if(kn>on)
{
d=kn-on;
printf("\ndifference:%d",d);
}
else
{
d=on-kn;
}
return 0;
}
