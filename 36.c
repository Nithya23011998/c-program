#include <stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int i,count=1,len;
	printf("\n enter the string:");
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
             if(a[i]<= 0 && a[i]>= 9)
              {
		count++;
	  }
	}
	printf("\n digit count:%d",count);
	return 0;
}
