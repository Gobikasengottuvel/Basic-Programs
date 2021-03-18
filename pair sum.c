#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the no of elements");
	scanf("%d",&n);
	int a[n],c[n];
	printf("enter the numbers\n");
	for(i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		c[i] =a[i]+a[i+1];
		++i;
	}
	i=1;
	printf("%d Pairs with ",n/2);
	if(c[i]==c[i+2])
	{
		printf("sum %d are",c[i]);	
	}
	for(i=1;i<n;i++)
	{
	
	printf(" (%d,%d)",a[i],a[i+1]);
	++i;
		
		if(i== n-2){printf("and");
	}
	
	}
}

