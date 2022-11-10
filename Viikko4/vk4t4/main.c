#include <stdio.h>

void tulo(float luku, float k);

int main()
{
    int luku;
    int k;
    tulo(luku, k);


    return 0;
}

void tulo(float luku, float k)
{
    k=3;
    float tulos;
    tulos=luku*k;

    printf("Anna kokonaisluku\n");
    scanf("%f", &luku);
    printf("Tulos on %f\n", tulos);


}
