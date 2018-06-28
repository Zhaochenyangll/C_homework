#include<stdio.h>
void input(int *a)
{
	int i;
	for(i=0;i<10;i++)
	scanf("%d",&a[i]);
}
void run(int *a)
{
	int i,max=a[0],min=a[0],temp,j,k;
	for(i=1;i<10;i++)
	{
		if(max<a[i]) {
			max=a[i];
			j=i;
		}
		if(min>a[i]) {
			min=a[i];
			k=i;
		}
	}
	temp=a[k];a[k]=a[0];a[0]=temp;
	temp=a[j];a[j]=a[9];a[9]=temp;
}
void print(int *a)
{
	int i;
	for(i=0;i<10;i++)
	printf("%d ",a[i]);
}
int main()
{
	int a[10];
	input(a);
	run(a);
	print(a);
	return 0;
}
