#include<stdio.h>
int main()
{
	int n,n1,ans;
	printf("\n enter the number:");
	scanf("%d%d",&n,&n1);
	ans=n*n1;
	if(ans%2==0)
	printf("\n even product");
	else
	printf("\nodd product");
	return 0;
}
