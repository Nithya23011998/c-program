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
             if(a[i]=='.' && a[i+1]!='\0')
              {
		count++;
	  }
	}
	printf("\n  line count:%d",count);
	return 0;
}
