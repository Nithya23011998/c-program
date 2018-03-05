#include<stdio.h>
int main()
{
char a[10];
int len;
printf("\n enter the string:");
scanf("%s",&a);
len= strlen(a);
if(len%2==0)
{
a[len/2-1]='*';
a[len/2]='*';
}
else
{
a[len/2]='*';
}
printf("%s",a);
return 0;
}
