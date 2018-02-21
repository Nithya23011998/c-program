#include<stdio.h>
int main()
{
	int a,b,t=0;
	printf("\n enter the numbers  :");
	scanf("\n %d,%d",&a,&b);
	a=a^b;
	b=b^a;
	
	printf("\n  after swap: %d,%d ",a,b);
	return 0;
	
	
}
