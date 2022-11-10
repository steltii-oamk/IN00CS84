#include <stdio.h>

void lue();
void luvunTulostus();

int main()
{
int numbers[5];

    for(int x=0 ; x<=4 ; x++) {

        printf("Anna luku");

        scanf("%d",&numbers );

    }

    return 0;
}

void  lue(int luku)
{
    printf("Anna kokonaisluku\n");
    scanf("%i",&luku);
    printf("Luku oli %i\n", luku);
}

void luvunTulostus(int luku)
{
    printf("luvunTulostus funktion luku: %i\n", luku);
}
