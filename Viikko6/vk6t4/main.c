#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define Y 1

typedef struct Student_struct{
    int id;
    char name[50];
    int age;
}Student;


int main()
{
    Student st[Y];

    for(int x=0; x<=Y; x++){
        printf("Give students id\n");
        scanf("%i", &st[x].id);
        printf("Give students name\n");
        scanf("%s", st[x].name);
        printf("Give students age\n");
        scanf("%i", &st[x].age);
        fflush(stdin);
    }

    printf("Students:\n");
    for(int x=0; x<=Y; x++){
        printf("id: %i name: %s age: %i\n", st[x].id, st[x].name, st[x].age);
    }

    int tal=0;
    FILE *file;
    printf("Haluatko tallentaa tiedot (Kylla=1 / Ei=2)\n");
    scanf("%i", &tal);

    if (tal==1){

        file=fopen("D:/Files/2-Ohjelmointi/TestQT/Viikko6/students_data.txt","w");

            for(int x=0; x<2; x++){
                fprintf(file, "%i,%s,%i\n", st[x].id, st[x].name, st[x].age);
            }
        fclose(file);
        printf("Data saved\n");
    }

    if (tal==2){
        printf("Data not saved\n");
    }

    fclose(file);

    return 0;
}
