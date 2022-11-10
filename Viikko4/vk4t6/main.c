#include <stdio.h>

void nelioLasku();
void ympyraLasku();

int main()
{
    char end[]="9";

    nelioLasku();
    ympyraLasku();

    return 0;
}

void nelioLasku(int nelio)
{
    int s;
    printf("Anna nelion sade\n");
    scanf("%i",&s);
    nelio=4*s;
    printf("Nelion kehan pituus annetulla sivun pituudella on %i\n", nelio);

}

void ympyraLasku(int ympyra)
{
    int r;
    printf("Anna ympyran sade\n");
    scanf("%i",&r);
    ympyra=2*3.14*r;
    printf("Nelion kehan pituus annetulla sivun pituudella on %i\n", ympyra);

}
