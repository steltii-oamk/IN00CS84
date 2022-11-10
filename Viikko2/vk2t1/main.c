#include <stdio.h>

int main()
{
    float luku;
    printf("Anna luku\n");
    scanf("%f",&luku);


    if(luku<10){
        printf("Annettu luku on pienempi kuin 10\n");
    }

    else if(luku==10){
        printf("Annettu luku on yhtasuuri kuin 10\n");
    }

    else {
        printf("Annettu luku on suurempi kuin 10\n");
    }

    return 0;
}
