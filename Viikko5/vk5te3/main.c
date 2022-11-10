#include <stdio.h>
#include <string.h>

typedef struct Person_struct{
    int pnumber;
    char pname[20];
}person;

int main()
{
    person team[3];

    for(int x=0; x<=2; x++){
        printf("Anna %d. numero\n",x+1);
        scanf("%d",&team[x].pnumber);
        printf("Anna %d. nimi\n",x+1);
        fflush(stdin);
        gets(team[x].pname);
    }

    printf("Joukkueen jasenet\n");
    for(int x=0; x<=2; x++){
        printf("Nimi: %s Numero:%d\n", team[x].pname, team[x].pnumber);
    }

    return 0;
}
