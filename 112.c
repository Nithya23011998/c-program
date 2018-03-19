#include<stdio.h>
int main()
{
int n,k,num,i;
scanf("%d%d",&n,&k);
printf("enter num:");
for(i=1;i<=n;i++)
{
scanf("%d",&num);
}
for(i=1;i<=n;i++)
{
if(num==k)
{
printf("yes");
}
else
{
printf("no");
}
}
return 0;
}
