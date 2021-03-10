#include<stdio.h>
int main()
{
	int i,n,j; 
	int a,b,c;
	scanf("%d",&n);

	
	for(i=1;i<=n;i++)
	{a=0;
	b=1;
	printf("%d\t",b);
		for(j=1;j<i;j++)
		{
		c=a+b;
			a=b;
		b=c;
		printf("%d\t",c);
		}
		printf("\n");
	}
}
