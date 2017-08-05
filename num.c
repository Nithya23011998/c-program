#include<stio.h>
#include<conio.h>
void  main()
{
int a;
clrscr;
printf("enter the value:");
scanf("%d",&a);
if(a<0)
{
printf("the num is negative");
}
else if(a>0)
{
printf("the num is positive");
}
else
{
printf("the num is zero");
}
getch();
}
