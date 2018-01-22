#include <stdio.h>
int main()
{
	int a[50],i,k,n;
	printf("\nenter the count of array:");
	scanf("%d",&n);
	printf("\nenter the array elements:");
            for(i=0;i<n;i++)
	
		scanf("%d",&a[i]);
	 
            k=a[0];
            for(i=1;i<n;i++)
{
	if(k<a[i])
	{
	k=a[i];
	i++;
	}
	printf("\n%d",k);

}

return 0;
}
