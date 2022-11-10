#include <stdio.h>

int main()
{
    int ekaLuku=11;
    int tokaLuku;
    int summa;
    int tulo;
    float osamEka;
    int erotus;
    int jakojaannos;
    char merkkiTieto;

    float temperatureCtoF;

    tokaLuku=2;
    merkkiTieto='K';
    summa=ekaLuku+tokaLuku;
    tulo=ekaLuku*tokaLuku;
    osamEka=(float)ekaLuku/(float)tokaLuku;
    erotus=ekaLuku-tokaLuku;
    jakojaannos=ekaLuku%tokaLuku;

    temperatureCtoF=((float)ekaLuku*1.8)+(float)32;

    printf("Lukujen summa on %d, tulo on %d\n", summa, tulo);
    printf("Lukujen erotus on %d, osamaara on %f\n", erotus, osamEka);
    printf("Lukujen %d ja %d jakojaannos on %d\n", ekaLuku, tokaLuku, jakojaannos);
    printf("Kirjain on %c\n", merkkiTieto);

    printf("Celsius aste on %f faahrenheinttia\n", temperatureCtoF);
    return 0;

}
