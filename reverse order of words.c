#include<stdio.h>
#include<string.h>
int main()
{int i;
	char str[100];
	gets(str);
	int length=strlen(str);
	
	printf("Reversed order of words:");
	for(i=length-1;i>0;i--)
	{
		if(str[i]==' ' )
		{
			str[i]='\0';
		printf("%s ", &(str[i]) + 1);
			
		}
	
	}
		printf("%s",str);
}
