#include <stdio.h>
#include<string.h>
int main()
{
	char a[100];
	int ch=0,i;
	printf("\enter the sentence:");
	scanf("%[^\n]s",a);
	for(i=0 ; a[i] != "\0" ; i++ )
	{
		if(a[i]== ' ')
		ch++;
		
	}
	printf("\n number of words:%d",ch+1);
	return 0;
}
