#include<stdio.h>
void main()
{
int a,b,c;
printf("Enter the valus of a,b,c:");
scanf("%d%d%d",&a,&b,&c);
if(a>b ||a>c)
{
printf("a is the largest number");
}
else if(b>c)
{
printf("b is the largest number");
}
else
{
printf("c is the greatest number");
}
getch();
}
