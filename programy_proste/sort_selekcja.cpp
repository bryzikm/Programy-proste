/*
Sortowanie przez selekcjê. 

nale¿y znaleŸæ najmniejszy element i zmieniæ go miejscem z pierwszym, 
znaleŸæ drugi element w kolejnoœci i zamieniæ go miejscem w drugim, 
kontynuowaæ krok drugi a¿ do posortowania. 
*/

#include <iostream>
#include<conio.h>

void wyswietlTablice (int [], int);
void sortSel(int [], int);

using namespace std;

int main ()
{

	const int wTab=10;
	int tab[ wTab ]={1,4,7,5,100,150,9,34,-1,120};

	cout<<"Tablica przed posortowaniem :\n";
	wyswietlTablice(tab,wTab);
	sortSel(tab,wTab);
	cout<<"Tablica po posortowaniu :\n";
	wyswietlTablice(tab,wTab);
	cout<<"Nacisnij ENTER"<<endl;
	cin.get();
	return 0;
}

void wyswietlTablice (int tablica [], int wielkosc)
{
	for(int i=0; i<wielkosc; i++)
  	cout<<"Element tablicy : "<<(i+1)<<" Wartosc elementu : "<<tablica[i]<<endl;
}
void sortSel (int tablica [], int wielkosc )
{
  void zmien( int [], int, int);
  int min;

  for (int i=0; i<wielkosc; i++)
	{
  	min=i;
	  for(int j=i+1; j<wielkosc; j++)
		{
  		if(tablica[j]<tablica[min])
			{
 			 	min=j;
			}
		}
	  zmien(tablica,i,min);
  }
}

void zmien (int tablica [], int indeks, int indeks1)
{
	int temp;
	temp=tablica[indeks];
	tablica[indeks]=tablica[indeks1];
	tablica[indeks1]=temp;
}
