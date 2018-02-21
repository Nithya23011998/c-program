#include <stdio.h>
int main()
{
	int n,a,b,c;
	printf("\n enter the string:");
	scanf("%d",&n);
            a=n/100;
            b=(n%100)/10;
            c=(n%100)%10;
	printf("\n %d\t%d\t%d",a,b,c);
	return 0;
}
