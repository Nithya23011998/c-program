#include <stdio.h>
int main()
{
	int mul=0,n,i;
	printf("enter number:");
	scanf("%d",&n);
	for(i=1;i<=5;i++)
	{
		mul=n*i;
		printf("\nmultiples:%d",mul);
	}
return 0;
}
