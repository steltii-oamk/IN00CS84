#include <stdio.h>

void tulosta(float luku);
float summaa(float a, float b);

int main()
{
    float eka, toka, tulos;

    eka=10.55;
    toka=20.35;
    tulos=summaa(eka, toka);
    tulosta(tulos);
    return 0;
}

void tulosta(float luku)
{
    printf("Tulos on %.3f\n",luku);
}

float summaa(float a, float b)
{
    float summ;
    summ=a+b;
    return summ;
}
