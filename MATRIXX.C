#include<stdio.h>
#include<conio.h>
void main()
{
int a[3][3],b[3][3],sum[3][3],i,j;
clrscr();

	printf("Enter The First Matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter The Second Matrix");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j] = a[i][j] + b[i][j] ;
		}
	}
	printf("sum of a matric");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",sum[i][j]);
			printf("\n");
		}
	}

getch();
}
