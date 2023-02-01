#include<stdio.h>
int main()
{
	int matriceA[3][3],matriceB[3][3],SumOfMatrice[3][3];
	int i,j;
	printf("<------------------value------------------------------------------->\n ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value of matriceA [%d][%d]: ",i,j);
			scanf("%d",&matriceA[i][j]);
		}
	}
	printf("<-------------------value of second matrice------------------------->\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter value of matriceB [%d][%d]: ",i,j);
			scanf("%d",&matriceB[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			SumOfMatrice[i][j] = matriceA[i][j] + matriceB[i][j];
			
		}
	}
	printf("addition of matriceA and matriceB :\n");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",SumOfMatrice[i][j]);
		}
		printf("\n");
	}
}
