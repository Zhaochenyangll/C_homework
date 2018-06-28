#include<stdio.h>
struct Date
{
	int year;
	int month;
	int day;
};
int days(int year,int month,int day);

int main()
{
  struct Date p;
  printf("Please enter date(year,month,day)\n");
  scanf("%d,%d,%d",&p.year,&p.month,&p.day); 
  days(p.year,p.month,p.day);
  return 0;
}
  
int days(int year,int month,int day)
{
    int a[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int sum,i;
    sum=day;
	for(i=0;i<month-1;i++)
		sum+=a[i];
	if(((year%4==0&&year%100!=0)||year%400==0)&&month>2)
    	printf("The date is the %dth day in %d", sum+1,year);  
  	else
		printf("The date is the %dth day in %d", sum,year); 	
}

