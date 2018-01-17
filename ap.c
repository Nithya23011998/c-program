#include<stdio.h>
int main()
{
	int a, d, n, i, t;
     int sum = 0;
 
     printf("Enter the first num: ");
     scanf("%d", &a);
     printf("\nEnter the total num: ");
     scanf("%d", &n);
     printf("Enter the  difference: ");
     scanf("%d", &d);
     sum = (n * (2 * a + (n - 1)* d ))/ 2;
     t = a + (n - 1) * d;
     printf("Sum  is: ");
     for (i = a; i <= t; i = i + d )
     {
          if (i != t)
               printf("%d + ", i);
          else
               printf("%d = %d ", i, sum);
     }
     return 0;
}
