/*zad.1. 
Program generuj�cy tablic� n-elementow� (n>2 i n<200) wype�nian� liczbami losowymi. 
Oblicza i wypisuje sume element�w tablicy*/

#include<iostream.h>
#include<stdlib.h>
int main()
{
int n, i, suma=0, tab[200];    
    
   do 
   {cout<<"Podaj ile elementow tablicy"<<endl; 
    cin>>n;}
    while((n<=2)||(n>=200));
    
srand((unsigned)time(NULL));    
    for(i=0;i<n;i++)
    {
    tab[i]=rand();
    suma=suma+tab[i];
    }
    
cout<<"Suma elementow: "<<suma<<endl;    
    
    
system("pause");    
}
