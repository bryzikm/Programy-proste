/*zad.2. 
Program generuj�cy i wype�niaj�cy liczbami losowymi z zakresu od 10 do 40 tablic� 1000-elementow�. 
Znajduje element max i wypisuje ile razy wyst�puje w tablicy*/

#include<iostream.h>
#include<stdlib.h>
int main()

{
int tab[1000], i, max=0, licznik=0;

srand((unsigned)time(NULL));
    
    for(i=0;i<1000;i++)
    {
    tab[i]=rand()%31+10;
         
              if(tab[i]>max)          
              {max=tab[i];}
    }
cout<<"Max= "<<max<<endl;    
    
    for(i=0;i<1000;i++)
    {if(tab[i]==max)
    {licznik++;}}
    
cout<<"Element max wystapil: "<<licznik<<" razy"<<endl;    
    
system("pause");    
}
