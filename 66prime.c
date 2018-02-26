#include<stdio.h>
int main()
{
int l1,l2,i,f;
printf("enter the limiits:");
scanf("%d%d",&l1,&l2);
printf("prime numbers are:");
while(l1<l2)
{
	f=0;
	for(i=2;i<=l1/2;++i)
	{
		if(l1%i==0)
		{
			f=1;
			break;
		}
	}
	if(f==0)
	printf("%d",l1);
	++l1;
}
return 0;
		
}
