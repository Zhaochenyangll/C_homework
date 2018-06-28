#include <stdio.h>
#include <string.h>
int main()
{
 char s[2000];
 char *p1, *p2;
 int max=0, len=0,i;
 printf("Input a string: \n");
 gets(s);
 p1=s;
 for (i=0; i<=strlen(s); i++)
 {
    if ((s[i]==' '))
    {
        if (len>max)
        {
            max=len;
            p2=p1;
        }
        len=0;
    } 
    else
    {
        if (len==0)
        p1=&s[i];
        len++;
    }
 }
 printf("The longest word in a string\n");
 while (*p2 && *p2!=' ')
 {
 	printf("%c", *p2++);
 }
 
 return 0;
}
