#include<stdio.h>
int main()
{
int l1,l2,i,flag;
printf("enter the limiits:");
scanf("%d%d",&l1,&l2);
printf("prime numbers are:");
while(l1<l2)
{
	flag=0;
	for(i=2;i<=l1/2;++i)
	{
		if(l1%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	printf("%d",l1);
	++l1;
}
return 0;
		
}
