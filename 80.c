#include<stdio.h>
int main()
{
int n[10],i;
printf("\n enter the number:");
scanf("%d",&n);
for(i=0;n[i]<10;i++)
{
if(n[i]%2 !=0)
printf("\n%d\t",n[i]);
}
return 0;
}
