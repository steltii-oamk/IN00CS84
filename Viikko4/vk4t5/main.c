#include <stdio.h>

void vertaile();

int main()
{
    vertaile();

    return 0;
}

void vertaile(int a, int b)
{
    printf("Anna 2 kokonaislukua muodossa (x x).\n");
    scanf("%i %i", &a, &b);

    if(a>b){
        printf("%i > %i\n", a, b);
    }

    else if(a<b){
        printf("%i > %i\n", b, a);
    }

    else{
        printf("ERROR!!\n");
    }
}
