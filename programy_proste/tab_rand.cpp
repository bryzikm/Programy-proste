/*Program generujacy tablicê jednowymiarowa 500 elementow¹
wype³nian¹ liczbami losowymi z zakresu: +23 do +90. Elementy
tablicy mniejsze od 40 zastêpuje zerami i zlicza ich iloœæ.*/

#include<iostream.h>
#include<stdlib.h>
int main()
{
int tab[500], i, ile=0;
    
srand((unsigned)time(NULL));    
    
    for(i=0;i<500;i++)
    {    
    tab[i]=rand()%68+23;
                        
               if(tab[i]<40)
               {tab[i]=0;
               ile++;}
    
    }
cout<<ile<<" elementow jest mniejszych od 40"<<endl<<endl;    
    
system("pause");    
}
