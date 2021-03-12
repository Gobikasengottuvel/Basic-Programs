#include<stdio.h>
int main()
{int i,j;
	char a[100],b[100] ;
	printf("Input string1: ");
	scanf("%[^\n]%*c",a);
	printf("Input string2: ");
	scanf("%[^\n]%*c",b);
	for(i=0;a[i]!='\0';i++);
	for(j=0;b[j]!='\0';j++,i++)
	{
		a[i]=b[j];
	}
	printf("%s",a);
}
