#include <stdio.h>

int main()
{
    float luku1;
    float luku2;

    printf("Kirjoita eka numero.\n");
    scanf("%f", &luku1);

    printf("Kirjoita toka numero.\n");
    scanf("%f", &luku2);


    if(luku1>luku2){
        printf("Annoit luvut %.2f ja %.2f, joista %.2f on suurempi.\n", luku1, luku2, luku1);
    }

    else if(luku1<luku2){
        printf("Annoit luvut %.2f ja %.2f, joista %.2f on suurempi.\n\n", luku1, luku2, luku2);
    }

    else{
        printf("Antamasi numerot ovat yhtasuuret.\n");
    }

    return 0;
}
