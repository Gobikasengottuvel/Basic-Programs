#include<stdio.h>
int main()
{
	int n,max;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	int sec;
	for(i=1;i<n;i++)
	{
		if(max<a[i])
		{sec=max;
			max=a[i];
			
		}
		
	}
	printf("The second largest element in the array is %d",sec);
}
