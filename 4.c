#include <stdio.h>
int main ()
{
	int a,b,c,res;
	printf("Insert 3 numbers: \n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b&&a<c) res=a;
	else if (b<c) res=b;
	else res=c;
	printf("Minimum is %d\n",res);
}
