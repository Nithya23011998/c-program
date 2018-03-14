#include<stdio.h>
int main()
{
int n,k,a[10],i;
printf("\n enter the number:");
scanf("%d",&n);
printf("\n enter position:");
scanf("%d",&k);
printf("\n enter the numbers to be added:\n");
for(i=1;i<n;++i)
{
scanf("%d\n",&a[i]);
}
printf("%d",a[k]);
return 0;
}
