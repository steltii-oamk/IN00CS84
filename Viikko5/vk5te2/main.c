#include <stdio.h>
#include <string.h>



/*
struct Person_struct{
    int pnumber;
    char pname[20];
};
*/

typedef struct Person_struct{
    int pnumber;
    char pname[20];
}person;

int main()
{
    /*
    struct Person_struct p1;
    struct Person_struct p2;
    */

    person p1;
    person p2;

    p1.pnumber=1234;
    strcpy(p1.pname,"Pekka");
    p2.pnumber=4321;
    strcpy(p2.pname,"Ukko");

    printf("p1 nimi on %s ja numero on %i\n", p1.pname, p1.pnumber);
    printf("p2 nimi on %s ja numero on %i\n", p2.pname, p2.pnumber);

    return 0;
}
