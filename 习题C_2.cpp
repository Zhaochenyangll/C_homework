#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000];
	int i,j=0,size;
	printf("Input string\n");
	gets(a);
	size=strlen(a);
	for(i=0;i<size;i++)
	{
		if(a[i]=='A'||a[i]=='a')
		{
			b[j]=a[i];
			j++;
		}
		else if(a[i]=='E'||a[i]=='e')
		{
			b[j]=a[i];
			j++;
		}
		else if(a[i]=='I'||a[i]=='i')
		{
			b[j]=a[i];
			j++;
		}
		else if(a[i]=='O'||a[i]=='o')
		{
			b[j]=a[i];
			j++;
		}
		else if(a[i]=='U'||a[i]=='u')
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=0;i<j;i++)
	{
		printf("%c",b[i]);
	}
	return 0;
 } 
