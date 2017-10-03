#include<stdio.h>
#include<conio.h>
int main()
{
int i,sum=0,n;
printf("enter the range:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+i;
printf("the sum is:",sum);
}
return(0);
}
