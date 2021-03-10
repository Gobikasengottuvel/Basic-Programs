#include<stdio.h>
int main()
{
	int i,n1,n2,max;
	
	scanf("%d%d",&n1,&n2);
	max=(n1>n2)?n1:n2;//getting maximum number of user inputs
	while(1){
		if(max%n1==0 && max%n2==0){
			printf("LCM of two numbers is %d",max);
			break;
		}
		max++;
	}
}
