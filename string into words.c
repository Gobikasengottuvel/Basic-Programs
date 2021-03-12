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

	for(i=0;i<=count-3;i++)
	{
		t=(str[i] == 't' || str[i] == 'T');
		h=(str[i+1] == 'h' || str[i+1] == 'H');
		e=(str[i+2]=='e' || str[i+2]=='E');
		space=(str[i+3]==' ' || str[i+3]=='\0');
		if((t && h && e && space) ==1)
			k++;
		
	}
	printf("The frequency of the word 'the' is : %d",k);
	
}
