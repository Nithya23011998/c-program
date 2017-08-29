#include<stdio.h>
void main()
{
string ch;
printf("enter an character:");
scanf("%s",ch);
if(ch>='a' && ch<='z') || (ch>='A' && ch<='Z')
{
printf("character is alphabet");
}
else
{
printf("character is not an alphabet");
}
getch();
}
