#include<stdio.h>
int main()
{char str[20];
	int i,t,h,e,space,count=0,k=0;
	scanf("%[^\n]%*c",str);
	while(str[count]!='\0'){
		count++;
	}
	for(i=0;i<=count-3;i++)
	{
		t=(str[i]=='t' || str[i]=='T');
		h=(str[i+1]=='h' || str[i+1]=='H');
		e=(str[i+2]=='e'|| str[i+3]=='E');
		space=(str[i+3]==' '|| str[i+4]=='\0');
		if((t && h && e && space)==1)
		{
			k++;
		}
	}
	printf("%d",k);
}
