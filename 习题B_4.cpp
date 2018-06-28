#include<stdio.h>
void fun(int *a,int m,int n)
{
	int i,dum[100];
	for(i=0;i<n;i++)
	dum[i]=a[i];
	for(i=0;i<n;i++)
	a[(i+m)%n]=dum[i];
}
int main()
{
	int i,a[10],m,n;
	printf("Please input the number of the array:");
	scanf("%d",&n);
	printf("Please input %d digits:",n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("How long do you want to move :");
	scanf("%d",&m);
	fun(a,m,n);
	printf("The arrar of moved  is :");
	for(i=0;i<n;i++)
	printf("%d ",a[i]);
	printf("\n");
	return 0;
}
