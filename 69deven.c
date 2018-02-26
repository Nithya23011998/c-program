#include <stdio.h>
int main()
{
	int n,m;
	printf("\n enter the number:");
	scanf("%d%d",&n,&m);
	if((n-m)%2==0)
	{
		printf("\n even");
	}
	else
	{
		printf("\n odd");
	}
	return 0;
}
