#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filepointer;
    filepointer=fopen("D:/Files/2-Ohjelmointi/TestQT/Viikko6/test2.txt","r");

    if (filepointer == NULL)
    {
       perror("Error while opening the file.\n");
       exit(EXIT_FAILURE);
    }

    printf("The contents of file is:\n");

    int sana=0;
    char word[50];
    fscanf(filepointer, "%s",word);
    while (!feof(filepointer)) {
        sana++;
        printf("%s\n",word);
        fscanf(filepointer,"%i",&sana);
    }

    printf("Lukujen lukumaara %i\n",sana);

/*
    int rivi=0;
    char row[255];
    fgets(row, 255, filepointer);
    while(!feof(filepointer)){
        rivi++;
        printf("%s",row);
        fgets(row, 255, filepointer);
    }

    printf("Lukujen lukumaara %i\n",rivi);
*/
    fclose(filepointer);

    return 0;
}
