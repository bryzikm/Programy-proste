/*Napisz program generuj�cy tablic� jednowymiarow� 1000 
wype�nian� liczbami losowymi z zakresu -23 do +23. 
Oblicza i wypisuje ile element�w tablicy ma warto�� <=0.*/

#include<iostream.h>
#include<stdlib.h>
int main()
{
int tab[1000], i, ile=0;    
   
srand((unsigned)time(NULL));   
    
    for(i=0;i<1000;i++)
    {
    tab[i]=rand()%47-23;
    }
    
    for(i=0;i<1000;i++)
    {
             if(tab[i]<=0)
             {
             ile++;             
             }             
    }
    
cout<<ile<<" elementow tablicy ma wartosc mniejsza od zera"<<endl<<endl;    
    
    
    
    
system("pause");    
}
