#include<stdio.h>

struct Student
{
	int num;
	char name[20];
	int score[3];
};

int print(struct Student stu[]);

int main()
{
	struct Student stu[5];
	int i,j;
	for(i=0;i<5;i++)
	{ 
		printf("Please input num:");
		scanf("%d",&stu[i].num);
		printf("Please input name:");
		scanf("%s",&stu[i].name);	
		for(j=0;j<3;j++)
		{
			printf("Please input stu[%d].score[%d]:",i,j);
			scanf("%d",&stu[i].score[j]);
		}    
		printf("\n");
	}
    print(stu);
 
}

int print(struct Student stu[])
{
    int i,j;
	for(i=0;i<5;i++)
	{ 
		printf("%5d%10s\t",stu[i].num,stu[i].name);	
		for(j=0;j<3;j++)
			printf("%d\t",stu[i].score[j]);
		printf("\n");	 
	}
}
