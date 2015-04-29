/*
Zosta³eœ poproszony o napisanie programu, który zlicza³by odpowiedzi na ankietê zamieszczon¹ w pewnym piœmie. 
Oto pytania, jakie zadano czytelnikom: 

Co Twoim zdaniem powinno siê znaleŸæ w naszym piœmie ? 

recenzje gier, 
opisy sprzêtu, 
kursy programowania, 
nowoœci ze œwiata komputerów. 
*/

#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
  // inicjalizacja zmiennych
  // najpierw inicjalizujemy sta³¹ symboliczn¹ okreœlaj¹c¹ wielkoœæ tablicy
  // potem inicjalizujemy tablicê liczb typu int o nazwie tabOdp
  // tablica ma 4 elementy

  const int wTab=4;
  int tabOdp[wTab]={0}, licz;

  // wyœwietlamy informacje dla u¿ytkownika

  cout<<"Co Twoim zdaniem powinno siê znalezc w naszym pismie ?\n"
  		<<"1. recenzje gier\n2. opisy sprzêtu,\n3. kursy programowania,\n"
  		<<"4. nowoœci ze œwiata komputerów.\nWprowadz -1 aby zakonczyc.";

  cin>>licz;

  // pêtla odpowiedzialna za zliczanie odpowiedzi
  // 1. sprawdzamy jaka wartoœæ zosta³a wprowadzona przez u¿ytkownika
  // -jeœli u¿ytkownik wprowadzi³ mniej ni¿ 1 lub wiêcej ni¿ 4 to przerywamy pêtlê

  while(licz>0 && licz<5)
  {
    cout<<"Co Twoim zdaniem powinno siê znalezc w naszym pismie ?\n"
    <<"1. recenzje gier\n2. opisy sprzêtu,\n3. kursy programowania,\n"
    <<"4. nowoœci ze œwiatakomputerów.\nWprowadz -1 aby zakonczyc."<<endl;

    // zliczenie odpowiedzi indeks tablicy jest obliczany na przez wyra¿enie licz-1
    // zwiêkszenie elementu tablicy przez operator ++
    // wprowadzenie kolejnej odpowiedzi

    ++tabOdp[licz-1];
    cin>>licz;
  }

  // wyœwietlamy wyniki

  cout<<"Wynik ankiety :\n"
  		<<"1. recenzje gier :"<<tabOdp[0]<<"\n2. opisy sprzêtu :"<<tabOdp[1]
  		<<"\n3. kursy programowania :"<<tabOdp[2]
  		<<"\n4. nowoœci ze œwiata komputerów :"<<tabOdp[3]<<endl;

  getch();
}
