#include <stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,c=0,l=0;
	printf("\n enter the string:");
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
             if(a[i]>='0' && a[i]<= '9')

		c++;

	}
	printf("\n %d",c);
	return 0;
}
