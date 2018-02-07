#include<stdio.h>
int main()
{
	int n,i,a[10],k;

	printf("\n enter the number limit:");
	scanf("%d",&n);
	k=a[0];
	printf("\nenter the numbers:");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(k<a[i])
		{
		k=a[i];
		}
		
	
	}
	printf("\nmaximum:%d",k);
	return 0;
	
}
