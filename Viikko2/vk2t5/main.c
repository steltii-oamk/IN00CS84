#include <stdio.h>

int main()
{

    int id;
    char nimi[50];
    float yks;
    float kaks;
    float kol;


    // id kysyminen
    printf("Anna opiskelija id!\n");
    scanf("%i", &id);

    // etunimi
    printf("Anna etunimi!\n");
    scanf("%s", nimi);

    // kokeet 1-3
    printf("Anna kolmen osasuorituksen pisteet muodossa (x x x)\n");
    scanf("%f %f %f", &yks, &kaks, &kol);

    float ka=(yks+kaks+kol)/3;
    float yht=(yks+kaks+kol);
    printf("IDnumero : %i\n", id);

    printf("Opiskelijan nimi : %s\n", nimi);

    printf("Osasuoritus1 : %.0f\n", yks);

    printf("Osasuoritus2 : %.0f\n", kaks);

    printf("Osasuoritus3 : %.0f\n", kol);

    printf("Pisteet yhteensa = %.0f\n", yht);

    printf("Keskiarvo = %.2f\n", ka);

    if(ka>=80)
        printf("Kiitettava\n");
    if(ka>=60 && ka<=79)
        printf("Hyva\n");
    if(ka>=40 && ka<=59)
        printf("Valttava\n");
    if(ka<40)
        printf("Hylatty\n");

    return 0;
}
