#include<stdio.h>
int main()
{
    int a[10],size,i,j;
	printf("\nenter the size");
	scanf("%d",&size);
	printf("\nEnter the elements");
	for(i=0;i<size;i++)
	{
	for(j=0;j<size;j++)
	{
		scanf("%d",&a[i]);
	}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
	
	
		printf("\na[%d]----->%d\n",a[i],j);
	}
	}
	return 0;
    }
