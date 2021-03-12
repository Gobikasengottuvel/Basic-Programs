#include<stdio.h>
#include<string.h>
int main()
{

	char str[100];
		int i,alpha=0,special=0,digit=0;
		printf("Input string :");
		gets(str);
		for(i=0;i<strlen(str);i++)
		{
			if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&& str[i]<='Z'))
			{
				alpha++;
			}
			else if(str[i]>=48 && str[i]<=57)
			{
				digit++;
			}
			else{
				special++;
			}
		}
		
	printf("Alphabets = %d\n",alpha);
printf("Digits = %d\n",digit);
printf("Special characters = %d\n",special);
}
