#include <stdio.h>
int power(int base, int exp)
{
    int erg =1;
    for(int i= 0; i<exp;i++)
    {
        int erg =base*exp;
    }
    return erg;

}

void strlength(char*Zahl[])
{

    for (int i=0; i>sizeof(Zahl)-1;i++)
    {
        char Zeichenlägne =Zahl[i];
    }


}









int main(int argc, char*argv[])
{
    if(argc>2)
    {
        printf("Usage:bin Eingabefehler");
        return -1;
    }
    
    char*Binärzahl=argv[1];




    return 0;
}