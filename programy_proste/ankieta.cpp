/*
Zosta�e� poproszony o napisanie programu, kt�ry zlicza�by odpowiedzi na ankiet� zamieszczon� w pewnym pi�mie. 
Oto pytania, jakie zadano czytelnikom: 

Co Twoim zdaniem powinno si� znale�� w naszym pi�mie ? 

recenzje gier, 
opisy sprz�tu, 
kursy programowania, 
nowo�ci ze �wiata komputer�w. 
*/

#include <iostream>
#include<conio.h>

using namespace std;

int main()
{
  // inicjalizacja zmiennych
  // najpierw inicjalizujemy sta�� symboliczn� okre�laj�c� wielko�� tablicy
  // potem inicjalizujemy tablic� liczb typu int o nazwie tabOdp
  // tablica ma 4 elementy

  const int wTab=4;
  int tabOdp[wTab]={0}, licz;

  // wy�wietlamy informacje dla u�ytkownika

  cout<<"Co Twoim zdaniem powinno si� znalezc w naszym pismie ?\n"
  		<<"1. recenzje gier\n2. opisy sprz�tu,\n3. kursy programowania,\n"
  		<<"4. nowo�ci ze �wiata komputer�w.\nWprowadz -1 aby zakonczyc.";

  cin>>licz;

  // p�tla odpowiedzialna za zliczanie odpowiedzi
  // 1. sprawdzamy jaka warto�� zosta�a wprowadzona przez u�ytkownika
  // -je�li u�ytkownik wprowadzi� mniej ni� 1 lub wi�cej ni� 4 to przerywamy p�tl�

  while(licz>0 && licz<5)
  {
    cout<<"Co Twoim zdaniem powinno si� znalezc w naszym pismie ?\n"
    <<"1. recenzje gier\n2. opisy sprz�tu,\n3. kursy programowania,\n"
    <<"4. nowo�ci ze �wiatakomputer�w.\nWprowadz -1 aby zakonczyc."<<endl;

    // zliczenie odpowiedzi indeks tablicy jest obliczany na przez wyra�enie licz-1
    // zwi�kszenie elementu tablicy przez operator ++
    // wprowadzenie kolejnej odpowiedzi

    ++tabOdp[licz-1];
    cin>>licz;
  }

  // wy�wietlamy wyniki

  cout<<"Wynik ankiety :\n"
  		<<"1. recenzje gier :"<<tabOdp[0]<<"\n2. opisy sprz�tu :"<<tabOdp[1]
  		<<"\n3. kursy programowania :"<<tabOdp[2]
  		<<"\n4. nowo�ci ze �wiata komputer�w :"<<tabOdp[3]<<endl;

  getch();
}
