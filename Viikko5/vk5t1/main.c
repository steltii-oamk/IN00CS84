#include <stdio.h>
#include <string.h>


typedef struct car{
    char brand[20];
    char model[20];
    int year;
}car;



int main()
{
    car car_1;

    printf("Give car brand\n");
    scanf("%s", car_1.brand);
    printf("Give car model\n");
    scanf("%s", car_1.model);
    printf("Give car release year\n");
    scanf("%d", &car_1.year);

    printf("Car's brand %s, model %s and model year %d \n", car_1.brand, car_1.model, car_1.year);


    return 0;
}
