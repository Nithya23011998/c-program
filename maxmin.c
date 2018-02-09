#include<stdio.h>
int main()
{
	int n[100],i,max,min,lim;
	printf("\n enter the number limit:");
	scanf("%d",&lim);
	printf("\n enter the number:");
	scanf("%d",&n[i]);
            min=n[0];
	max=n[0];
	for(i=0;i<lim;i++)
	{
		if(min>n[i])
		{
			min=n[i];
		}
		if(max<n[i])
		{
			max=n[i];
		}
	}
	printf("\n max:%d and min:%d",max,min);
	
	return 0;
}
