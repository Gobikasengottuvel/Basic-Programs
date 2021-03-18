#include<stdio.h>
void swap(int *,int *);
main()
{
	int i,n,temp;
	printf("enter the number of elements :");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int l=0,m=0;
	int h=n-1;
	while(m<=h)
	{
		if(a[m]==0)
		{swap(&a[l],&a[m]);
			l++;
			m++;
		}
		else if(a[m]==1)
		{
			m++;
		}
		else if(a[m]==2)
		{
			swap(&a[m],&a[h]);
			--h;
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
void swap(int *l,int *m)
{
	int temp;
	temp= *l;
	*l = *m;
	*m = temp;
	printf("inside swap");
}
