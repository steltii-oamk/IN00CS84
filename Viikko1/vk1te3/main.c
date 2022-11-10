#include <stdio.h>

int main()
{
    int kokoLuku;
    float fLuku;

    int tableOfNumbers[2][3]={
            {100,200,300},
            {400,500,600}
        };
    printf("Taulukon ensimmainen alkio %d\n" ,tableOfNumbers[0][0]);
    printf("The last number in the table is %d\n",tableOfNumbers[1][2]);

    printf("Anna kokonaisluku\n");
    scanf("%d" ,&kokoLuku);
    printf("Kokonaisluku on %d\n" ,kokoLuku);

    // tämä on yhden rivin kommentti

    /* Seuraava rivi
     * tulostaa jotain
     */

    printf("Anna desimaaliluku\n");
    scanf("%f" ,&fLuku);
    printf("Desimaaliluku on %.3f\n" ,fLuku);
    return 0;
}
