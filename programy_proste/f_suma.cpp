/*1. Napisz funkcj� SUMA wyznaczaj�c� sum� dw�ch zadanych liczb ca�kowitych. 
Napisz program wykorzystuj�cy funkcj� SUMA.*/

#include<iostream.h>

//definiujemy funkcje suma
int Suma(int a, int b);

int main()
{
int a, b, suma;

cout<<"Suma 1: "<<Suma(a,b)<<endl;
cout<<"Suma 2: "<<Suma(a,b)<<endl;
cout<<"Suma 3: "<<Suma(a,b)<<endl;

system("pause");
}

int Suma(int a, int b)
{
int suma;   
    
cout<<"Podaj a"<<endl;
cin>>a;

cout<<"Podaj b"<<endl;
cin>>b;

suma=a+b;

return suma;
}
//koniec funkcji
//koniec zasiegu zmiennych a i b
