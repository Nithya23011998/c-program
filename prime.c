#include<stdio.h>
int main()
{
	int a,i=2,temp=0;
	printf("enter the number:");
	scanf("%d",&a);
	while(i<=a%2)
	{
		++i;
		if(a%i==0)
		{
			temp=a;
			break;
			
		}
		if(temp==0)
		
			printf("prime");
			else
			printf("not prime");
			
		
	}
	return 0;
}
