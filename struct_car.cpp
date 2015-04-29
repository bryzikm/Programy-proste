/*Struktura Car, zawieraj¹ca pola: nr_samochodu, kolor, max_prêdkoœæ, iloœæ_biegów, przebieg, imiê_kierowcy, nazwisko_kierowcy.
1. Wpisuje n samochodów
2. Wyœwietla samochody o 5 biegach i zapisuje je do pliku
3. Wypisuje samochody o maxymalnej prêdkoœci >250 km/h i zapis do pliku.
4. Wypisuje sumê przebiegów br¹zowych samochodów
5. oblicza œredni¹ prêdkoœæ poruszaj¹cych sie samochodów
6. Wypisuje dane o samochodzie dla kierowcy o podanym imieniu i zapisuje do pliku
7. Wypisuje imie kierowcy, którego samochód ma najwiêkszy przebieg
*/

#include<iostream.h>
#include<string.h>
#include<fstream.h>
using namespace std;

struct car
       { 
         int nr_samochodu;
         string marka;
         string model;
         string kolor;
         int max_predkosc;
         int ilosc_biegow;
         int przebieg;
         string imie_kierowcy;
         string nazwisko_kierowcy;
         };
                                  
int main()
{
int i, n;
car baza[10000];
            do{
               cout<<"Podaj ile samochodow wprowadzic do bazy"<<endl;
               cin>>n;}
            while((n<1)||(n>10000));
            
                            for(i=0;i<n;i++)
                            {
                                baza[i].nr_samochodu=i+1;
                                cout<<"Podaj marke"<<endl;
                                cin>>baza[i].marka;
                                cout<<"Podaj model"<<endl;
                                cin>>baza[i].model;
                                cout<<"Podaj kolor"<<endl;
                                cin>>baza[i].kolor;
                                cout<<"Podaj maksymalna predkosc"<<endl;
                                cin>>baza[i].max_predkosc;
                                cout<<"Podaj ilosc biegow"<<endl;     
                                cin>>baza[i].ilosc_biegow;
                                cout<<"Podaj przebieg"<<endl;
                                cin>>baza[i].przebieg;
                                cout<<"Podaj imie kierowcy"<<endl;
                                cin>>baza[i].imie_kierowcy;
                                cout<<"Podaj nazwisko kierowcy"<<endl;
                                cin>>baza[i].nazwisko_kierowcy;
                                cout<<endl<<endl;   
                                }
int x;                               
cout<<"Jaka czynnosc wykonac:"<<endl;
cout<<"    1 - wyswietlic samochody 5-ciobiegowe i zapisac do pliku,"<<endl;
cout<<"    2 - wypisac samochody o maxymalnej predkosci wiekszej od 250 km/h i zapisac do pliku,"<<endl;
cout<<"    3 - wypisac sume przebiegow brazowych samochodow,"<<endl;
cout<<"    4 - obliczyc srednia predkosc samochodow,"<<endl;
cout<<"    5 - wypisac dane samochodu dla podanego imienia kierowcy i zapisac do pliku,"<<endl;
cout<<"    6 - wypisac imie kierowcy samochodu o najwiekszym przebiegu."<<endl;
cin>>x;

fstream Plik;


        switch (x)
        {
               case 1:
                    {
                   Plik.open("Biegi.txt", ios::out|ios::in);
                   
                   for (i=0;i<n;i++)
                   {  
                                    if(baza[i].ilosc_biegow==5)
                                            {
                                            Plik<<baza[i].marka;
                                            Plik<<" ";
                                            Plik<<baza[i].model<<endl;
                                            cout<<baza[i].marka;
                                            cout<<"  ";
                                            cout<<baza[i].model<<endl<<endl;
                                            }
                                    else
                                            {cout<<"Brak samochodow"<<endl<<endl;}
                   } 
                   Plik.close();     
                   break;}      
                   
                   
               case 2:
                    {
                    Plik.open("Predkosc.txt", ios::out|ios::in);  
                      
                      for (i=0;i<n;i++)
                      {  
                                  
                                    if(baza[i].max_predkosc>250)
                                            {
                                            Plik<<baza[i].marka;
                                            Plik<<" ";
                                            Plik<<baza[i].model<<endl;
                                            cout<<baza[i].marka;
                                            cout<<"  ";
                                            cout<<baza[i].model<<endl<<endl;
                                            }
                                    else
                                            {cout<<"Brak samochodow"<<endl<<endl;}
                   } 
                   Plik.close();           
                                
                    break;}
               case 3:
                    {
                    int suma;    
                    suma=0;
                      for (i=0;i<n;i++)
                      {  
                                    if(baza[i].kolor=="brazowy")
                                            {
                                            suma=suma+baza[i].przebieg;
                                            
                                            }
                                    else
                                            {cout<<"Brak brazowych samochodow"<<endl<<endl;}
                   } 
                          cout<<"Suma przebiegow brazowych samochodow: "<<suma<<endl;
                                
                    break;}
       
               case 4:
                    {
                      double srednia;
                      int suma_pr;
                      srednia=0;
                      suma_pr=0;
                                for (i=0;i<n;i++)
                                {  
                                  suma_pr=suma_pr+baza[i].max_predkosc;
                                    
                                    } 
                      srednia=suma_pr/n;
                      cout<<"Srednia predkosc samochodow wynosi: "<<srednia<<"km/h"<<endl;
                            
                                
                    break;}
                 case 5:
                    {
                    Plik.open("Kierowca.txt", ios::out|ios::in);  
                      
                      string szukane_imie;
                      cout<<"Podaj imie"<<endl;
                      cin>>szukane_imie;
                      cout<<endl<<endl;
                      
                      for (i=0;i<n;i++)
                      {  
                                  
                                    if(baza[i].imie_kierowcy==szukane_imie)
                                            {
                                            Plik<<baza[i].marka;
                                            Plik<<"  ";
                                            Plik<<baza[i].model;
                                            Plik<<"  ";
                                            Plik<<baza[i].max_predkosc;
                                            Plik<<"km/h  ";
                                            Plik<<baza[i].przebieg;
                                            Plik<<"km  ";
                                            Plik<<baza[i].kolor<<endl;
                                            cout<<baza[i].marka;
                                            cout<<"  ";
                                            cout<<baza[i].model;
                                            cout<<"  ";
                                            cout<<baza[i].max_predkosc;
                                            cout<<"km/h  ";
                                            cout<<baza[i].przebieg;
                                            cout<<"km  ";
                                            cout<<baza[i].kolor<<endl<<endl;
                                            }
                                    else
                                            {cout<<"Brak kierowcy o podanym imieniu"<<endl<<endl;}
                   } 
                   Plik.close();           
                                
                    break;}
                    
                    case 6:
                         {
                          int przebieg;
                          przebieg=0;
                          string imie;
                                     for(i=0;i<n;i++)
                                     {
                                           if(baza[i].przebieg>przebieg)
                                                  {
                                                  przebieg=baza[i].przebieg;                      
                                                  imie=baza[i].imie_kierowcy;                      
                                                  }             
                                                     
                                                                                          
                                      }
                            cout<<"Kierowca, ktorego samochod ma najwiekszy przebieg ma na imie: "<<imie<<endl; 
                          
                         break;}
       
       
       }
       
system("pause");
}
