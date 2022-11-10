#include <stdio.h>
#define LUKUMAARA 3

int main()
{
    int luvut[LUKUMAARA];
    int i,j;

    i=0;
    printf("Anna %i lukua\n",LUKUMAARA);

    while(i<LUKUMAARA){
        printf("Anna luku\n");
        scanf("%i", &luvut[i]);
        i++;

    }

    for(j=0;j<LUKUMAARA;j++){
        printf("%i\n",luvut[j]);
    }

    printf("Toinen taulukon tulostus\n");
    i=0;
    //do-while toisto
    do{
        printf("%i\n",luvut[i]);
        i++;
    } while(i<LUKUMAARA);



    return 0;
}
