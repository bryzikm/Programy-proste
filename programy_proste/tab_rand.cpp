/*Program generujacy tablic� jednowymiarowa 500 elementow�
wype�nian� liczbami losowymi z zakresu: +23 do +90. Elementy
tablicy mniejsze od 40 zast�puje zerami i zlicza ich ilo��.*/

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
