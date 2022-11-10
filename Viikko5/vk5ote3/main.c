#include <stdio.h>
#include <string.h>
#define NUMBER 2

typedef struct Car{
    char brand[20];
    char model[50];
    int yearModel;
}cart;

int main()
{
    cart myCars[NUMBER];
    char end[]="LOPETA";
    char selection[30]="XXX";

    for(int x=0; x<NUMBER; x++){
        printf("Anna auton %i. merkki\n",x+1);
        scanf("%s", myCars[x].brand);
        fflush(stdin);

        printf("Anna auton %i. malli\n",x+1);
        scanf("%s", myCars[x].model);
        fflush(stdin);

        printf("Anna auton %i. valmistusvuosi\n",x+1);
        scanf("%d", &myCars[x].yearModel);
        fflush(stdin);
    }

    printf("Anna niiden autojen merkki jotka tulostetaan\n");
    scanf("%s", selection);
    while(strcmp(end,selection)!=0){
        printf("Autot ovat:\n");

        for(int x=0; x<NUMBER; x++){
            if(strcmp(myCars[x].brand,selection)==0){
                printf("Merkki: %s Malli: %s Vuosimalli: %d\n", myCars[x].brand,
                       myCars[x].model, myCars[x].yearModel);

            }
        }
        printf("Anna niiden autojen merkki jotka tulostetaan\n");
        scanf("%s",selection);
    }

    return 0;
}
