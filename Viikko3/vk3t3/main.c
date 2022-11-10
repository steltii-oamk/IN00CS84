#include <stdio.h>

int main()
{
    int salanumero=0;

    while(salanumero!=17){
        printf("Anna salainen numero\n");
        scanf("%i", &salanumero);
        if(salanumero==17)
            printf("Arvasit oikein salainen numero on %i\n", salanumero);
    }

    return 0;
}
