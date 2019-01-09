#include <stdio.h>

int main(void)

	{
		int age, YOW;
		printf("Insert your age and years that you've spent working: \n");
		scanf("%i%i",&age,&YOW);
		if(age > 60 && YOW > 20) printf("Employed.\n");
		else 
		{
			float grade;
			printf("Insert your average grade on university: \n");
			scanf("%f",&grade);
			if(grade > 8.5) printf("Employed");
			else printf("Sorry, you've been declined.");
		}

	}	
