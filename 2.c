#include <stdio.h>	
int main (void)
	{
		int S,a,b,c,d,e,f;
		printf("Unesite tri broja: \n");
		scanf("%i%i%i",&a,&b,&c);
		if(a>0) d=a; else d=0;
		if(b>0) e=b; else e=0;
		if(c>0) f=c; else f=0;
		S=d+e+f;
		printf("Suma brojeva vecih od nule je %i\n",S);
	}
