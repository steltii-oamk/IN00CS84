#include <stdio.h>
#include <string.h>

//Tehdään ohjelma joka tulsotaa tekstiä kunnes lopetetaan LOPETUS sanalla

int main()
{
    int xMuuttuja=5;
    int *mypointer;

    mypointer=&xMuuttuja;

    *mypointer=*mypointer+1000;

    printf("xMuuttuja:n arvo eli *mypointer on %d\n",*mypointer);

    return 0;

    /*
    char mjLuettu[30]="XXX";
    char mjSana[]="LOPETUS";
    int i=0;

    while(strcmp(mjLuettu,mjSana)!=0)
    {
        printf("Tulostetaan kunnes syotat LOPETUS\n");
        scanf("%s", mjLuettu);
    }

    return 0;
    */


}
