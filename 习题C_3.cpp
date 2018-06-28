#include<stdio.h>
int main()
{
	char a[1000];
	int i;
	printf("Enter a four-digit number\n");
	gets(a);
	for(i=0;i<4;i++)
	{
		printf("%c ",a[i]);
	} 
	return 0;
} 
