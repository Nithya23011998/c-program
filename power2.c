#include <stdio.h>
int main()
{
	int a,b;
	printf("\n enter the number:");
	scanf("%d",&a);
	b=(a&(a-1));
      if(b==0)
            printf("\n\t %d is power of 2",a);
      else
            printf("\n\t %d not power of 2",a);
            
            return 0;
	
}
