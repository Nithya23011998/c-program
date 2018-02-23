#include <stdio.h>
#include<string.h>
int main()
{
	char a[10]={"one","two","three","four","five","six","seven","eight","nine","ten"};
    int i,n;
    printf("\n enter the number [0-9]:");
    scanf("%d",&n);
    for(a[i]=0;a[i]<10;a[i]++)
    {
    	if(n==1)
    	{
    		printf("\n%s",a[0]);
    		n++;
    	}
    }
    return 0;

}
