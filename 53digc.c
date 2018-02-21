#include <stdio.h>
int main()
{
	int n,a,sum=0;;
	printf("\n enter the string:");
	scanf("%d",&n);
            while(n>0)
            {
            a=n%10;
            n=n/10;
            sum=sum+a;
            }
	printf("\n %d",sum);
	return 0;
}
