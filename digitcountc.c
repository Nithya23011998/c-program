#include <stdio.h>
int main()
{
	int a,count=0,i;
	printf("\n enter the number:");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
	a=a/10;
	count++;
	}
	printf("\n %d",count);
            return 0;
	
}
