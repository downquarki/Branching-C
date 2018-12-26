#include <stdio.h>
int main (void)
{	
	int p1hours, p1minutes,p2hours,p2minutes,p3hours,p3minutes;
	do 
	{
		printf("Unesite vreme dolaska prve osobe.\n");
		scanf("%i%i",&p1hours,&p1minutes);
	}
	while (p1hours < 0 || p1hours > 23 || p1minutes > 59 || p1minutes < 0);

	do 
	{
		printf("Unesite vreme dolaska druge osobe.\n");
		scanf("%i%i",&p2hours,&p2minutes);
	}
	while (p2hours < 0 || p2hours > 23 || p2minutes > 59 || p2minutes < 0);

	do 
	{
		printf("Unesite vreme dolaska trece osobe.\n");
		scanf("%i%i",&p3hours,&p3minutes);
	}
	while (p3hours < 0 || p3hours > 23 || p3minutes > 59 || p3minutes < 0);

	p1minutes += p1hours*60;
	p2minutes += p2hours*60;
	p3minutes += p3hours*60;
	
	int min;
	if (p1minutes < p2minutes && p1minutes < p3minutes) min = p1minutes;
	else if (p2minutes < p3minutes) min = p2minutes;
	else min = p3minutes;
	
	int mid,max;
	if (p1minutes == min && p2minutes < p3minutes) {mid = p2minutes; max = p3minutes;}
	else if (p1minutes == min) {mid = p3minutes; max = p2minutes;}
	else if (p2minutes == min && p1minutes < p3minutes) {mid = p1minutes; max = p3minutes;}
	else if (p2minutes == min) {mid = p3minutes; max = p1minutes;}
	else if (p1minutes < p2minutes) {p1minutes = mid; p2minutes = max;}
	else {p2minutes = min; p1minutes = max;}

	if (min + 10 >= mid && mid + 5 >= max) printf("Sreli su se \n");
	else printf("Nisu se sreli.\n");	
}
