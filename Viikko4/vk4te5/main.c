#include <stdio.h>
#define LKM 3

//taulukko funktion parametrina

void tulostaMjono(char mj[]);
void lueLuvut(int tau[], int lukum);
void tulostaLuvut(int tau[], int lukum);

int main()
{
    char nimi[30]="Pekka";
    int luvut[LKM];

    tulostaMjono("Eka tulostus");
    tulostaMjono(nimi);
    lueLuvut(luvut, LKM);
    tulostaLuvut(luvut, LKM);
    return 0;
}

void tulostaMjono(char mj[])
{
    printf("%s\n",mj);
}

void lueLuvut(int tau[], int lukum)
{
    for(int i=0;i<lukum;i++)
    {
        printf("Anna luku\n");
        scanf("%i",&tau[i]);
    }
}

void tulostaLuvut(int tau[], int lukum)
{
    printf("Taulukon alkiot ovat\n");
    for(int i=0;i<lukum;i++)
    {
        printf("%i\n", tau[i]);
    }
}
