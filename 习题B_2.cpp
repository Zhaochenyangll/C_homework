#include<stdio.h>
#include<string.h>
void sort(char a[3][20])
{
	int i,j;
	char temp[20];
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,*(a+i));
				strcpy(*(a+i),*(a+j));
				strcpy(*(a+j),temp);
			}
		}
	}
} 
int main()
{
	int i;
	char a[3][20];
	printf("Please enter three strings:\n");
	for(i=0;i<3;i++)
	scanf("%s",a[i]);
	sort(a);
	printf("\nThe strings of sorted is:\n");
	for(i=0;i<3;i++)
	printf("%s\n",a[i]);
	return 0;
}
