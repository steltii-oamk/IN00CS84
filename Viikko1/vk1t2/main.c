#include <stdio.h>

int main()
{
    float celsius;
    float fahren;

    printf("Anna lampotila celsius asteina\n");
    scanf("%f" ,&celsius);
    fahren=((float)celsius*1.8)+(float)32;
    printf("Antamasi lampotila %.2f on Farenheit asteina %.2f. \n" ,celsius ,fahren);

    return 0;
}
