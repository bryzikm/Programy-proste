/*1. Napisz funkcjê SUMA wyznaczaj¹c¹ sumê dwóch zadanych liczb ca³kowitych. 
Napisz program wykorzystuj¹cy funkcjê SUMA.*/

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
