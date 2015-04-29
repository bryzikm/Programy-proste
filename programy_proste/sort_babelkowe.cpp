/*
Sortowanie b¹belkowe wymaga kilku przejœæ przez ca³¹ tablicê. 
W ka¿dym przejœciu tablicy kolejne pary s¹ porównywane. 
Je¿eli para znajduje siê w porz¹dku rosn¹cym lub wartoœci s¹ identyczne 
ich wartoœci s¹ pozostawione. Jeœli para znajduje siê w porz¹dku malej¹cym, 
wartoœci zamieniane s¹ miejscami. 
*/

#include <iostream>
#include<conio.h>

void wyswietlTablice (int [], int);
void sortBab(int [], int);

using namespace std;
int main ()
{

	const int wTab=10;
	int tab[ wTab ]={1,4,7,5,100,150,9,34,-1,120};

	cout<<"Tablica przed posortowaniem :\n";
	wyswietlTablice(tab,wTab);
	sortBab(tab,wTab);
	cout<<"Tablica po posortowaniu :\n";
	wyswietlTablice(tab,wTab);
	cin.get();
	return 0;
}

void wyswietlTablice (int tablica [], int wielkosc)
{
	for(int i=0; i<wielkosc; i++)
		cout<<"Element tablicy : "<<(i+1)<<" Wartosc elementu : "<<tablica[i]<<endl;
}

void sortBab (int tablica [], int wielkosc )
{
	int temp;

	for (int i=0; i<wielkosc-1; i++)
	{
		for (int j=0; j<wielkosc-i; j++)
		{
			if(tablica[j]>tablica[j+1])
			{
				temp=tablica[j];
				tablica[j]=tablica[j+1];
				tablica[j+1]=temp;
			}
		} // for(j=0..
	} // for(i=0..
}
