#include<stdio.h>
void sort(int *a)
{
	int temp,i,j;
	for(i=0;i<2;i++)
	{
		for(j=i+1;j<3;j++)
		{
			if(*(a+i)>*(a+j))
			{
				temp=*(a+i);
				*(a+i)=*(a+j);
				*(a+j)=temp;
			}
		}
	}
} 
int main()
{
	int i,a[3];
	printf("Please enter three digits:");
	for(i=0;i<3;i++)
	scanf("%d",&a[i]);
	sort(a);
	printf("\nThe digits of sorted is:");
	for(i=0;i<3;i++)
	printf("%d ",a[i]);
	return 0;
}
