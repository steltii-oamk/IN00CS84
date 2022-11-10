#include <stdio.h>

void laske();
void tulosta();

int x;

int main()
{

    x=50;
    laske();
    tulosta();

    return 0;
}

void laske(){
    x=x+10;
}

void tulosta(){
    printf("x muuttujan arvo on %i\n", x);
}
