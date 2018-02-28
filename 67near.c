#include <stdio.h>
int main()
{
	int n;
	printf("\n enter the number:");
	scanf("%d",&n);
	while((n%10)!=0)
	{
	n+=1;	
	}
	printf("\n nearest multiple is:%d",n);
	return 0;
}
