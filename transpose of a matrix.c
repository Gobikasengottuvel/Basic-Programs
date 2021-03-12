#include<stdio.h>
int main()
{int r,c;
printf("Input the rows and columns of the matrix :");
scanf("%d%d",&r,&c);
	int a[r][c],i,j,b[r][c];
	printf("Input elements in the first matrix :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{printf("element - [%d],[%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("The transpose of a matrix is :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}

}
