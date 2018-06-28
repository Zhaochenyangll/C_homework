#include<stdio.h>
#include<string.h>
int main()
{
	char a[1000],b[1000];
	int size1,size2,i,j=0;
	printf("Enter the first string\n");
	gets(a);
	printf("Enter the second string\n");
	gets(b);
	size1=strlen(a);
	size2=strlen(b);
	for(i=size1;i<size1+size2;i++)
	{
		a[i]=b[j];
		j++;
	}
	printf("The results of string\n");
	for(i=0;i<size1+size2;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
} 
