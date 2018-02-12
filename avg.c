#include <stdio.h>
int main()
{
	int n,avg,sum=0,i;
	printf("\n enter the number limit:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{     
		printf("\n%d",i);
		sum += i;
	}
	avg=sum/n;
	printf("\n average is:%d",avg);
	
}
