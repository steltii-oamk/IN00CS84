#include <stdio.h>

int main()
{
    int luku, tulos;
    printf("Anna luku\n");
    scanf("%i", &luku);
    for(int i=1;i<=10;i++){
        tulos=i*luku;
        printf("%i * %i = %i\n", luku, i, tulos);
    }

    return 0;
}
