#include<stdio.h>
#include<string.h>
int main()
{
char a[10];
int len,n,i,count=0;
printf("enter:");
scanf("%s",&a);
printf("enter num:");
scanf("%d",&n);
len= strlen(a);
printf("%d",len);
for(i=len-1;i>=0;i--)
{
printf("\n%c",a[i]);
count++;
if(n==count)
{
break;
}
}
return 0;
}
