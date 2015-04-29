/*Symulacja s³ownika podpowiadaj¹cego s³owo w tel. Komórkowych (+s³ownik w pliku i obs³uga)*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "slownik.txt"

int NaLiczbe(char *wyraz)
{
char *klawiatura[] = {"", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
char *klawiatura2[] = {"", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};
int wartosc = 0;

while(*wyraz)
{
for(int i = 1; i <= 8; i++)
if(strchr(klawiatura[i], *wyraz) || strchr(klawiatura2[i], *wyraz))
{
wartosc = wartosc * 10 + i;
break;
}
wyraz++;
}
return wartosc;
}

int main(int argc, char* argv[])
{
int liczba, i =0;

liczba = atol(argv[1]);

while( *(rzeczowniki + i) )
{
if( NaLiczbe(*(rzeczowniki + i)) == liczba )
printf("%s\n", *(rzeczowniki + i));
i++;
}
system("PAUSE"); 
}
