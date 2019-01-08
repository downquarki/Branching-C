#include <stdio.h>
int main (void)
{
    //Deklaracije promenljivih
    int number, hundreds, ones;

    //Unosenje cetvorocifrenog broja

    do
    {
    	printf("Unesite cetvorocifreni broj: \n");
        scanf("%i",&number);
    }
    while (number < 1000 || number > 9999);

    /*ovaj loop se moze zameniti sa 
    
    int number = 0;
    if (number < 1000 & number > 9999)
    {
        scanf("%i",&number);
    }

    Ovaj loop ce raditi zbog pocetne vrednosti celobrojne promenljive "number".
    OBAVEZNO STAVITI DA JE number = 0!!!
     U suprotnom number ima garbage value, sto znaci da uzima vrednost iz
    obrisane memorije!*/

    //naci stotinu broja: 
    
    hundreds = (number/100)%10;
    //naci jedinicu broja:

    ones = number%10;
    //zamena

    number = number - (100 * hundreds) + (100*ones) - ones + hundreds;

    /*ovde uzimamo vrednost broja, oduzimamo njegove stotine:
    eg. 4753 - 7 * 100 = 4053;
        broj    stotine
    zatim dodajemo broj jedinica kao broj stotina, tako sto mnozimo broj jedinica sa 100:
    eg. 4053 + 3 * 100 = 4353;
        broj    jedinica
    sada oduzimamo broj jedinica:
    eg. 4353 - 3 = 4350;
        broj   j.
    i na kraju dodajemo broj stotina originalnog broja kao broj jedinice:
    eg. 4350 + 7 = 4357;
        broj   j.

    :) Uz kompletno objasnjenje. Do/while loop je samo moj nacin da odradim proveravanje. */
    
    //Stampamo izracunat broj:
    printf("Broj sa zamenjenim stotinama i deseticama:%i\n",number);
    
    return 0;

}
