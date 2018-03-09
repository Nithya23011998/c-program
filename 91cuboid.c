#include<stdio.h>
int main()
{
int l,b,h,area,vol;
printf("\n cuboid");
scanf("%d%d%d",&l,&b,&h);
area =(2*l*b )+(2*b*h) +(2*h*l);
vol = l*b*h;
printf("\narea:%d,volume:%d",area,vol);
return 0;
}
