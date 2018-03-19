#include<stdio.h>
int main()
{
int n[10],prod,i;
for(i=0;i!='\0';i++)
{
scanf("%d",&n);
}
prod=n[0];
for(i=1;i!='\0';i++)
{
prod= prod*n[i];
}
printf("%d",prod);
return 0;
}
