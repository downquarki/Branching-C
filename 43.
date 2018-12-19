#include <stdio.h>
void PrintResult(char mark[]);
int main(void)
	{
		printf("Unesite granice ocena: \n");
		int btwo,bthree,bfour,bfive,points;	
		scanf("%i%i%i%i",&btwo,&bthree,&bfour,&bfive);
		printf("Unesite poene ucenika: \n");
		scanf("%i",&points);
		if(points < btwo) PrintResult("jedan");
		else if (points < bthree) PrintResult("dva");
		else if (points < bfour) PrintResult("tri"); 
		else if (points < bfive) PrintResult("cetiri");
		else PrintResult("pet");
	}
void PrintResult(char mark[])
{
	printf("Ucenik je dobio ocenu: %s \n",mark);
}
