#include <stdio.h>
int main()
{
	int n,n1;
	printf("\n enter the string:");
	scanf("%d",&n);
            if(n%2==0)
            {
            n1=n-2;
            }
            else
            {
            n1=n-1;
            }
	printf("\n %d",n1);
	return 0;
}
