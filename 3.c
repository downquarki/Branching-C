#include <stdio.h>
int main()
	{
		int a,b;
		printf("Insert 2 numbers: \n");
		scanf("%d%d",&a,&b);		
		if(a>b) printf("%d is the maximum and %d is minimum number.\n",a,b);
		else printf("%d is the maximum and %d is the minimum number.\n",b,a);
	}	
