#include<stdio.h>
int main()
{
	int a,b,temp=0;
	printf("\n enter the numbers to be swapped:");
	scanf("\n %d,%d",&a,&b);
	a=a^b;
	b=b^a;
	
	printf("\n the numbers after swapped: %d,%d ",a,b);
	return 0;
	
	
}
