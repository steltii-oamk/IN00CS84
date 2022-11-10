#include <stdio.h>
#include <string.h>


typedef struct car{
    char brand[20];
    char model[20];
    int year;
}car;



int main()
{
    car maara[3];

    for(int x=0; x<=2; x++){
    printf("Give car brand\n");
    scanf("%s", maara[x].brand);
    printf("Give car model\n");
    scanf("%s", maara[x].model);
    printf("Give car release year\n");
    scanf("%i", &maara[x].year);

    }

    printf("Cars:\n");
    for(int x=0; x<=2; x++){
        printf("Brand: %s model:%s release year:%i\n", maara[x].brand, maara[x].model, maara[x].year);
    }

    return 0;
}
