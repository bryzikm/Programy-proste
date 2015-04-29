/*Program generujacy tablicê jednowymiarow¹ 555 elementow¹ wype³nian¹
liczbami losowymi z zakresu od -33 do +45. Oblicza i wypisuje sumê 
elementów tablicy spe³niajacych warunki parzyste i wiêksze od +33.*/

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
