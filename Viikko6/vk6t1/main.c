#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *filepointer;
    filepointer=fopen("D:/Files/2-Ohjelmointi/TestQT/Viikko6/t1.txt","w");

    if (filepointer == NULL)
    {
       perror("Error while opening the file.\n");
       exit(EXIT_FAILURE);
    }

    char nimi[30];

    printf("Anna nimi\n\n");
    scanf("%s", nimi);
    fprintf(filepointer,"%s",nimi);

    printf("Tiedostoon kirjoitettu\n");

    fclose(filepointer);

    return 0;
}
