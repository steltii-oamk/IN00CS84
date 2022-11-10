#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int vastaus;
typedef struct student_struct{
    int id;
    char name[50];
    int age;

}
student;
int main()
{
    student maara[5];
    for(int x=0; x<=4; x++){
        printf("Anna %d. opiskelijan id\n", x+1);
        scanf("%d", &maara[x].id);
        printf("Anna %d. opiskelijan nimi\n", x+1);
        scanf("%s", maara[x].name);
        printf("Anna %d. opiskelijan ika\n", x+1);
        scanf("%d", &maara[x].age);
    }
    printf("Opiskelijoiden id:t, nimet ja iat\n");
    for(int x=0; x<=4; x++){
    printf("id: %d Nimi: %s Ika: %d\n",maara[x].id, maara[x].name, maara[x].age);
    }

    int vastaus=0;
    FILE *filepointer;
    printf("Haluatko tallentaa tiedot?(Kylla=1/Ei=2)\n");
    scanf("%d", &vastaus);

    if(vastaus==1){
        filepointer=fopen("C:/Qt/ss.txt","w");
        for(int x=0; x<=4; x++){
            fprintf(filepointer, "id: %d Nimi: %s Ika: %d\n", maara[x].id, maara[x].name, maara[x].age);
        }
        printf("Tiedot tallennettu\n");
    }
    if(vastaus==2){
        printf("Tietoja ei tallennettu\n");
    }
    fclose(filepointer);
    return 0;
}
