#include <stdio.h>
#include <string.h>

typedef struct Person_struct{
    int pnumber;
    char pname[20];
}person;

int main()
{
    person p1;
    p1.pnumber=1;
    strcpy(p1.pname,"Jim Morrison");

    printf("Person1: name = %s number = %d \n",p1.pname, p1.pnumber);

    person *p2=&p1;

    p2->pnumber=p2->pnumber+10;
    printf("Person2: name = %s number = %d \n",p2->pname, p2->pnumber);

    return 0;
}
