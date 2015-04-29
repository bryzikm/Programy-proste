#include<iostream>

#include<string.h>

using namespace std;



string duze(char napis[]);



int main()

{

char tekst[]="\"To jest przykladowy tekst z cyframi 123\"";



    cout << "Program dokona zamiany na duze litery dla podanego napisu" << endl << endl;

    cout << "Napis przed modyfikacja: " << tekst << endl;


    duze(tekst);


    cout << "Napis po modyfikacji: " << tekst << endl;


system("pause");

}



string duze(char napis[])

{

unsigned long indeks=0;

char znak, roznica = 'A'-'a';


    
    while(znak=napis[indeks])

    {

	if( (znak>='a') && (znak<='z') )
	napis[indeks]+=roznica;

	indeks++;

    }

}
