
#include <stdio.h>
#include <string.h>
int main()
{
	char mystring[50],mystring2[50];
	int len, i;
             printf("Enter a string: ");
	scanf("%s", mystring);
	strcpy(mystring[i],mystring2[i]);
	for(i=len-1; i>=0; i--)
	{
	printf("%c", mystring[i]);
	
	}
	if(mystring2[i]==mystring[i])
	printf("\nyes");
	else
	printf("\n no");
	
    return 0;
}
