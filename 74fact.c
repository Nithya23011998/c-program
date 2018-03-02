#include<stdio.h>
int main()
{
int n,i,fact;
printf("\n enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
 if(n%i==0)
 {
      fact=i;
      printf("\n%d",fact);
 }
}
 return 0;
}
