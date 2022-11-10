#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *filepointer;
   char ch;
   filepointer=fopen("D:/Files/2-Ohjelmointi/TestQT/Viikko6/test2.txt","r");

   if (filepointer == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("The contents of file is:\n");

   //luku rivi kerrallaan
   char row[255];
   fgets(row, 255, filepointer);
   while(!feof(filepointer)){
       printf("%s",row);
       fgets(row, 255, filepointer);
   }

   /*
   //luku sana kerrallaan
   char word[50];
   fscanf(filepointer, "%s", &word); //luetaan ensimmäinen sana
   while(!feof(filepointer)){
       printf("%s ",word);
       fscanf(filepointer, "%s", &word);
   }
   */

    /*
    //luku rivi kerrallaan
    while((ch = fgetc(filepointer)) != EOF)
        printf("%c", ch);
    */

   fclose(filepointer);
   return 0;
}
