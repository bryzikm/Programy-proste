/*zad.5. Program generuj¹cy tablicê dwuwymiarow¹ 100x100 wype³nian¹ dowolnymi liczbami losowymi. 
Oblicz i wypisz sumê elementów z podanego przez u¿ytkownika wiersza tablicy*/

#include<iostream.h>
#include<stdlib.h>
int main()

{
int tab[100][100], i, j, suma=0, wiersz;    
    
srand((unsigned)time(NULL));    
    
    for(i=0;i<100;i++)//wiersze
    {
    
              for(j=0;j<100;j++)//kolumny
              {
              tab[i][j]=rand();                           
              }
     //cout<<endl;                                        
    }
    
    do    
    {cout<<"Podaj wiersz"<<endl;
    cin>>wiersz;}
    while((wiersz<0)||(wiersz>100));
    
 for(i=0;i<100;i++)//wiersze
    {
              if(i==wiersz-1)
              {
              for(j=0;j<100;j++)//kolumny
              {
              suma=suma+tab[i][j];                           
              }
              }
     //cout<<endl;                                        
    }   
cout<<"Suma: "<<suma<<endl;    
system("pause");    
}
