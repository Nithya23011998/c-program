#include<stdio.h>
int main()
{
int n,k,pow=1;
scanf("%d%d",&n,&k);
 while (k != 0)
{
    pow *= n;
    --k;
}

printf("\nn^k:\t%d",pow);
return 0;
}
