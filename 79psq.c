#include<stdio.h>
int main()
{
int n1,n2,i,num,count;
printf("\n enter the two values:");
scanf("%d%d",&n1,&n2);
num=n1*n2;
for(i=1;i<num;++i)
{
i=i*i;
if(i==num)
{
count=1;
break;
}
}
if(count==1)
printf("\n yes");
else
printf("\n no");
return 0;
}
