#include<stdio.h>
#include<string.h>
int main()
{
	char s[1000];
	int i,a=0,b=0,c=0,d=0,size;
	printf("Input string\n");
	gets(s);
	size=strlen(s);
	for(i=0;i<size;i++)
	{
		if(s[i]>='A'&&s[i]<='Z')
		a++;
		else if(s[i]>='a'&&s[i]<='z')
		a++;
		else if(s[i]==' ')
		c++;
		else if(s[i]>='0'&&s[i]<='9')
		b++;
		else
		d++;
	}
	printf("Number of letters:  %d\n",a);
	printf("Digital number:  %d\n",b);
	printf("Number of Spaces:  %d\n",c);
	printf("Number of other characters:  %d\n",d);
	return 0;

 } 
