#include <stdio.h>

int main()
{
    float kanta;
    float korkeus;

    printf("Anna kolmion kanta ja korkeus muodossa (x x)\n");
    scanf("%f %f" ,&kanta ,&korkeus);

    float pa=kanta*korkeus/2;

    printf("Kun kolmion kanta on %.2fm ja korkeus %.2fm, on kolmion ala %.2fm^2.\n" , kanta ,korkeus ,pa);
    return 0;
}
