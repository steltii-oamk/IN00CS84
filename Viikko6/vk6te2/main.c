#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *filepointer;
   char ch;
   filepointer=fopen("D:/Files/2-Ohjelmointi/TestQT/Viikko6/test2.txt","w");
   //filepointer=fopen("D:/Files/2-Ohjelmointi/TestQT/Viikko6/test2.txt","a");

   if (filepointer == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   //Tiedostuun kirjoitus
   fprintf(filepointer,"Hello world\n");
   fprintf(filepointer,"Hello world again\n");
   char x='A';
   fputc(x, filepointer);
   fputc('B', filepointer);
   fputc('C', filepointer);
   fputc('\n', filepointer);
   fputc('D', filepointer);

   printf("Tiedostoon kirjoitettu\n");

   fclose(filepointer);
   return 0;
}
