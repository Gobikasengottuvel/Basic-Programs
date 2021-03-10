#include<stdio.h>
int main()
{
	int b=0,n,i=1,rem;
	scanf("%d",&n);
int	t=n;
	while(n!=0)
	{
		rem=n%2;
		n=n/2;
		b=b+rem*i;
		i=i*10;
		
	}
	printf("the binary number for %d is %d",t,b);}
