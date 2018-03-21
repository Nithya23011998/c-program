#include<stdio.h>
int main()
{
int n,k,count=0,i,a[10];
printf("\n enter n,k:");
scanf("%d%d",&n,&k);
printf("\nenter number:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
if(a[i]==k)
{
count++;
}
}
if(count!=0)
printf("repetitions:%d",count);
return 0;
}
