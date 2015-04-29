#include<iostream>

#include<string>

using namespace std;



void wspak(char napis[]);



int main()

{

char tekst[]="\"To jest przykladowy tekst\"";


    cout << "Program dokona wypisania wspak podanego napisu" << endl << endl;

    cout << "Napis przed modyfikacja: " << tekst << endl;

    wspak(tekst);

    cout << "Napis po modyfikacji: " << tekst << endl;

}


void wspak(char napis[])

{

unsigned long dlugosc = strlen(napis), indeks;

char bufor;



    for(indeks=0; indeks<dlugosc/2; indeks++)

    {

	bufor = napis[indeks];

	napis[indeks] = napis[dlugosc-indeks-1];

	napis[dlugosc-indeks-1] = bufor;

    }

}