#include<stdio.h>
void main()
{
long year;
printf(enter the year);
scanf("%d",&year);
if(year%4==0)
{
  if(year%100 == 0)
  {
    if(year%400 == 0)
    {
      printf(""%d is a leap year");
     }
 else
             {
               printf("%d is not a leap year");
             }

printf("The given year is a leap year");
}
else
{
printf("the given year is not a leap year");
}
getch();
}
