#include <stdio.h>

int main()
{

    int taulukko[3][3]={
            {10,20,30},
            {40,50,60},
            {40,50,60}
    };

    printf ("Taulukon 1. rivin luku on %d\n", taulukko[0][2]);
    printf ("Taulukon 2. rivin luku on %d\n", taulukko[1][1]);
    printf ("Taulukon 3. rivin luku on %d\n", taulukko[2][0]);
    return 0;
}
