#include <stdio.h>
#include <math.h>

int main ()
{
	int a,b;
	printf("Insert 2 numbers: \n");
	scanf("%i%i%",&a,&b);
	int rabs1 = fabs(b-a);

	if (rabs1 == b-a) printf("The first number is smaller than second\n");
	else printf("The first number is bigger than the second\n");
}

