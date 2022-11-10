#include <stdio.h>

int main()
{
    float eka;
    float toka;


    printf("Syota kaksi kokonaislukua muodossa (x x)\n");
    scanf("%f %f" ,&eka ,&toka);

    float summa=eka+toka;
    float erotus=eka-toka;
    float tulo=eka*toka;
    float osam=eka/toka;

    printf("Syotetyt luvut olivat %.0f ja  %.0f.\n" , eka ,toka);
    printf("Lukujen summa on %.0f.\n" , summa);
    printf("Lukujen erotus on %.0f.\n" , erotus);
    printf("Lukujen tulo %.0f.\n" , tulo);
    printf("Lukujen osamaara %.2f.\n" , osam);
    return 0;
}
