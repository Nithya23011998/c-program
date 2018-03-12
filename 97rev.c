#include<stdio.h>
int main()
{
int n,rem;
printf("\n enter:");
scanf("%d",&n);
while(rem!=0)
{
rem=n%10;
printf("%d",rem);
n=n/10;
}
return 0;
}
