#include<stdio.h>
int  main()
{
	int sum=0,i,j,n;
	printf("enter a number for row and columns");
	scanf("%d",&n);
	int a[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("your matrix is :\n");
		for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}printf("sum =");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			if(i==0||i==n-1||i==j)
			{
			printf("%d+",a[i][j]);
			sum=sum+a[i][j];
			}
			
		}
	}
	printf("\n%d",sum);
}
