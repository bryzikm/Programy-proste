/*Program generujacy tablic� jednowymiarow� 555 elementow� wype�nian�
liczbami losowymi z zakresu od -33 do +45. Oblicza i wypisuje sum� 
element�w tablicy spe�niajacych warunki parzyste i wi�ksze od +33.*/

#include<iostream.h>
#include<stdlib.h>
int main()

{
int tab[555], i, suma=0;
    
srand((unsigned)time(NULL));    
    for(i=0;i<555;i++)
    {
    tab[i]=rand()%79-33;
              
              if((tab[i]%2==0)&&(tab[i]>33))
              {suma=suma+tab[i];}    
    }
cout<<"Suma: "<<suma<<endl;    
    
    
    
    
    
system("pause");    
}
