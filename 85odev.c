#include<stdio.h>
#include<string.h>
int main()
{
int i,len;
char a[10];
printf("\n enter the string:");
scanf("%s",&a);
len=strlen(a);
for(i=0;i<len;i++)
{
if(i%2==0)
{
printf("%c",a[i]);
}
}
printf("\t");
for(i=0;i<len;i++)
{
    if(i%2==1)
{
printf("%c",a[i]);
}
}
return 0;
}
