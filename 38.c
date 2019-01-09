#include <stdio.h>
#include <math.h>

int main (void)
{
    //taking in hours and minutes (you can feel free to find another way to do this)
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

    //conversion of hours and minutes to just minutes
	p1minutes += p1hours*60;
	p2minutes += p2hours*60;
	p3minutes += p3hours*60;

	int min,mid,max;
	//minimum value
	min = fmin(fmin(p1minutes, p2minutes), fmin(p2minutes,p3minutes));
	//maximum value
	max = fmax(fmax(p1minutes, p2minutes), fmax(p2minutes, p3minutes));
	//the last unrelated number I named mid
	if (min == p1minutes && max == p2minutes) mid = p3minutes;
	else if (min == p1minutes && max == p3minutes) mid = p2minutes;
	else mid = p1minutes;
    //printing to console whether people met or not
	if (min + 10 >= mid && mid + 5 >= max) printf("Sreli su se \n");
	else printf("Nisu se sreli.\n");
}
