#include <stdio.h>
int main()
{
	int a;
    printf("\n enter the number:");
	scanf("%d",&a);
    if(a%10==0 || a%10==1)
    {
         printf("\n yes");
    }
	else
    {
          printf("\n no");
    }
	return 0;
}
