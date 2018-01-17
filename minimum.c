#include<stdio.h>
int main()
{
  int minval,size,i,array[50];
  printf(enter the size of elements in an array:");
  scanf("%d",&size);
  printf("enter the numbers:");
  for(i=1;i<size;++i)
  {
    scanf(%d",&array[i]);
    minva=array[0];
  }
  for(i=1;i<size;++i)
  {
    if(array[i]<minval)
    {
      minval=array[i];
      
    }
  }
printf("the min val is:",minval);
return 0;
}
