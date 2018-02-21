#include<stdio.h>
int main()
{
int n1,n2,t=0;
printf("\n Enter values:");
scanf("%d%d",&n1,&n2);
printf("\n before swapping:%d,%d",n1,n2);
t=n1;
n1=n2;
n2=t;
printf("\n after swapping:%d,%d",n1,n2);
return 0;
}
