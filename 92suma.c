#include<stdio.h>
int main()
{
int n,a[10],sum=0,i;
printf("\n enter the number:");
scanf("%d",&n);
printf("\n enter the numbers to be added:\n");
for(i=0;i<n;i++)

scanf("%d",&a[i]);

for(i=0;i<n;i++)

sum=sum+a[i];

printf("sum:%d",sum);

return 0;
}
