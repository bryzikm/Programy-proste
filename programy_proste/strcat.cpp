/*
Funkcja strcat() zadzia³a w taki sposób, ¿e ³añcuch znaków  
napis2 zostanie do³¹czony do koñca ³añcucha napis1. Po  
zakoñczeniu dzia³ania funkcji zmienna napis1 zawiera "swój  
w³asny" napis i do³¹czony na koñcu napis zawarty uprzednio w  
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
   cout << "Naciœnij dowolny klawisz";  
getch();  
return 0; 
}  
