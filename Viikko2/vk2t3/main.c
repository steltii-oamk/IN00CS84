#include <stdio.h>

int main()
{

    printf("Anna kokonaisluku valilta 1-7\n");

    int eka;

    scanf("%i",&eka);

    switch (eka) {
            case 1:{
              printf("Maanantai\n");
              break;
            }
            case 2:{
              printf("Tiistai\n");
              break;
            }
            case 3:{
              printf("Keskiviikko\n");
              break;
            }
            case 4:{
              printf("Torstai\n");
              break;
            }
            case 5:{
              printf("Perjantai\n");
              break;
            }
            case 6:{
              printf("Lauantai\n");
              break;
            }
            case 7:{
              printf("Sunnuntai\n");
              break;
            }
            default:{
              printf("Numerolle ei ole viikonpaivaa!!\n");
              break;
            }
        }

    return 0;
}
