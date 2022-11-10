#include <stdio.h>

int main()
{
    FILE *filepointer;
    filepointer=fopen("D:/Files/2-Ohjelmointi/TestQT/Viikko6/test.txt","w");

    fprintf(filepointer,"Hello world\n");
    fclose(filepointer);
    return 0;
}
