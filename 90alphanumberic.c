#include<stdio.h>
int main()
{
char n[10];
int i;
printf("\n enter the string:");
scanf("%s",&n);
for(i=0;n[i]!='\0';i++)
{
if(n[i]>='0' && n[i]<='9')
{
printf("%c",n[i]);
}
}
return 0;
}
