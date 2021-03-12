#include<stdio.h>
#include<string.h>
int main()
{char str[100];
int i,k=0,count=0,t,h,e,space;
	gets(str);
	 while (str[count] != '\0')
    {
        count++;
    }
printf("Strings or words after split by space are :\n");
	for(i=0;i<=count;i++)
	{
	 if(space=(str[i]==' ' || str[i]=='\0'))
	 {printf("\n");
	 
	 }
	 else{
	 	printf("%c",str[i]);
	 }
	 	
	 
		
	}

	
}
