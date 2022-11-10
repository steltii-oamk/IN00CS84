#include <stdio.h>

int main()
{

    float total;

    printf("Kirjoita ostosten kokonaismaara!\n");
    scanf("%f",&total);

    float sata0=10;
    float sata=total*0.9;
    float kol0=15;
    float kol=total*0.85;
    float viis0=20;
    float viis=total*0.8;
    float more0=25;
    float more=total*0.75;

    if(total>0 && total<100){
            printf("Olet ostanut tassa kuussa %.2f eurolla ja saat niista alennusta %.0f prosenttia. Ostosten lopullinen summa on %.2f euroa.\n", total, sata0, sata);
    }
    if(total>100 && total<300){
            printf("Olet ostanut tassa kuussa %.2f eurolla ja saat niista alennusta %.0f prosenttia. Ostosten lopullinen summa on %.2f euroa.\n", total, kol0, kol);
    }
    if(total>300 && total<500){
            printf("Olet ostanut tassa kuussa %.2f eurolla ja saat niista alennusta %.0f prosenttia. Ostosten lopullinen summa on %.2f euroa.\n", total, viis0, viis);
    }
    if(total>500){
            printf("Olet ostanut tassa kuussa %.2f eurolla ja saat niista alennusta %.0f prosenttia. Ostosten lopullinen summa on %.2f euroa.\n", total, more0, more);
    }

    return 0;
}
