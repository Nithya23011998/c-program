#include <stdio.h>
int main()
{
    char string1[10],string2[10];
    int i,temp=0;
    printf("Enter the string1 value: ");
    gets(string1);
    printf(" Enter the String2 value: ");
    gets(string2);

       for(i=0; string1[i]!='\0'; i++)
       {
              if(string1[i] == string2[i])
              temp = 1;
              else
              temp = 0;
       }

       if(temp != 1 && (string1[i]<string1[i]))
             printf("%s",string1[i]);
       else if(temp != 1 && (string1[i]<string1[i]))
             printf("%s",string2[i]);
        else
             printf("Both string same.");

return 0;
}
