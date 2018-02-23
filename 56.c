#include <stdio.h>
#include<string.h>
int main()
{
    char a[20];
    int len,i,temp;
    printf("\n enter the string:");
    scanf("%s",a);
    len=strlen(a);
    for(i=0;a[i]<len;i++)
    {
    	if(a[i]>= '0' && a[i] <= '9')
    	{
    	temp=1;
    	}
    	if(a[i] >=65 && a[i]<=90 || a[i]>=97 && a[i]<=122 )
    	{
    		temp=0;
    	}
    }
    if(temp==0 && temp==1)

    {
    	printf("yes");
    }
    else
    {
    	printf("\n no");
    }
    return 0;

}
