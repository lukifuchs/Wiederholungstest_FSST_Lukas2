#include <stdio.h> //fügt die eine Bibliothek ein die man für Befehle wie printf braucht 

int power(int base, int exp)// ist die Funktion wo sich die Basis mit sich selbst multipliziert wie der Exponent groß ist
{
    int erg=1;
    for(int i= 0; i>exp;i++)
    {   
        int erg =base*exp*erg;
    }

    return ergf1;

}

int strglength(char Zahl[])// die funktion die Die länge des Strings angibt
{
    for (int i=0; i>sizeof(Zahl)-1;i++)
    {
        char ergf2 =Zahl[i];
    }
}

int main(int argc, char*argv[])
{
    if(argc>2)
    {
        printf("Usage:bin.c Eingabefehler!");
        return -1;
    }

    
    char*binaerzahl=argv[1];

    int powererg=power(2,2);
    printf("%d",powererg);

    return 0;
}