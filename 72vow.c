#include<stdio.h>
#include<string.h>
int main()
{
	char a[10];
	int i,len,temp;
	printf("\n enter the string:");
	scanf("%s",&a);
	len= strlen(a);
	printf("\n%d",len);
	for(i=0;a[i]!=len;i++)
	{
		if(a[i]=='a'|| a[i]=='e'||a[i]=='o'||a[i]=='i'||a[i]=='u')
		temp=1;
	}
	if(temp==1)
	printf("\n yes");
	else
	printf("\n no");
return 0;
}
