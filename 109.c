#include<stdio.h>
int main()
{
  int minval,size,i,array[50];
  printf("\nenter the size of elements in an array:");
  scanf("%d",&size);
  printf("\nenter the numbers:");
  for(i=0;i<size;++i)
  {
    scanf("%d",&array[i]);
  }
   minval=array[0];
  for(i=0;i<size;++i)
  {
    if(array[i]<minval)
    {
      minval=array[i];
      
    }
 }
printf("\nthe min val is:%d",minval);
return 0;
}
