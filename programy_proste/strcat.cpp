/*
Funkcja strcat() zadzia�a w taki spos�b, �e �a�cuch znak�w  
napis2 zostanie do��czony do ko�ca �a�cucha napis1. Po  
zako�czeniu dzia�ania funkcji zmienna napis1 zawiera "sw�j  
w�asny" napis i do��czony na ko�cu napis zawarty uprzednio w  
zmiennej napis2.
*/

#include <conio.h>  
#include <iostream.h> 
#include <string.h>     //W tym pliku jest prototyp strcat() 
  
int main()  
{  
char imie[50], nazwisko[30];  
 
   cout << "Podaj imie: ";  
   cin >> imie;  
  
   cout << "Podaj nazwisko: ";  
   cin >> nazwisko;  
  
   strcat(imie, " ");     
   strcat(imie, nazwisko);    
  
   cout << "\nNazywasz sie: " << imie << '\n';  
   cout << "Naci�nij dowolny klawisz";  
getch();  
return 0; 
}  
