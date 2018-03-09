#include<stdio.h>
int main()
{
int l,b,h,ans;
printf("\n a*b mod c\n");
scanf("\n%d%d%d",&l,&b,&h);
ans=l*b%h;
printf("%d",ans);
return 0;
}
