#include<stdio.h>
int main()
{
int p,t,r,ans;
float f;
scanf("%d%d%d",&p,&t,&r);
ans=(p*t*r)/100;
f=floor(ans);
printf("\n floor value is:%f",f);
return 0;
}
