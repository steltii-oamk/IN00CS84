#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *source;
    FILE *target;
    char ch;
    source=fopen("D:/Files/2-Ohjelmointi/TestQT/Viikko6/source.txt","r");
    target=fopen("D:/Files/2-Ohjelmointi/TestQT/Viikko6/target.txt","w");


    if (source == NULL)
    {
       perror("Error while opening the file.\n");
       exit(EXIT_FAILURE);
    }

    //luku ja kirjoitus merkki kerrallaan
    while((ch = fgetc(source)) != EOF)
    {
        if(ch==',') fputc(';', target);
        else fputc(ch, target);

        printf("%c", ch);
    }

    fclose(source);
    fclose(target);

    return 0;
}
