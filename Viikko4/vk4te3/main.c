#include <stdio.h>

int main()
{
    int eka, toka;

    eka=10;
    toka=20;
    //eka+=toka;  //eka=eka+toka
    eka-=toka;  //eka=eka-toka
    eka++;      //eka=eka+1
    toka--;     //toka=toka-1
    printf("Eka on %i\n",eka);
    printf("Toka on %i\n",toka);

    return 0;
}
