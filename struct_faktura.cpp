/*Struktura Faktura, zawieraj¹ca dane: nr faktury, kwota, data_wystawienia, data_sprzeda¿y, miejsce, wystawi³, kod_pocztowy, firma_nabywca, zap³aci³
1.Dodaj now¹ fakturê do bazy
2.Wyœwietl wszystkie faktury wystawione dla COMARCH i zapisz do pliku
3.Wyszukaj faktury wystawione przed 6.10.2010
4.Usuñ faktury, których data wystawienia jest starsza ni¿ 31.12.2007 i jest niezap³acona
5.Wyœwietl faktury, w których data_wystawienia jest inna ni¿ data_sprzeda¿y
6.Oblicza i wypisuje kwoty faktur które nie zosta³y zap³acone w poszczególnych latach
7.Zapisz do pliku dane faktur wystawionych przez Juliana  Wrzeœnia.*/

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

struct Faktura_struktura
				{
					int nr_id;
					int kwota;
					int dzien_w; //dzien wystawienia
					int miesiac_w; //miesiac wystawienia
					int rok_w; // rok wystawienia
					int dzien_s; //dzien sprzeda¿y
					int miesiac_s; // miesiac sprzedazy
					int rok_s; // rok sprzeda¿y
					string miejsce;
					string imie_w; //imie osoby wystawiajacej
					string nazwisko_w; //nazwisko -||-
					string kod_pocztowy;
					string firma_nabywca;
					int zaplacone;
				};
				
int main()
{
	int i, n;  //zmienne przechowywujace ilosc faktur oraz ich kolejnosc
	
Faktura_struktura faktura[3000];	
			
			do
			{
				cout<<"Podaj ilosc faktur ktore chcesz wprowadzic:"<<endl;
				cin>>n;
			}
			while((n<1)&&(n>3000));
			
						for(i=0;i<n;i++)
						{
							faktura[i].nr_id=i+1;
							cout<<"Podaj kwote na jaka faktura zostala wystawiona.\n";
							cin>>faktura[i].kwota;
							do
							{
							cout<<"Podaj dzien wystawienia faktury.\n";
							cin>>faktura[i].dzien_w;
							}while((faktura[i].dzien_w<1)||(faktura[i].dzien_w>31));
							do
							{
							cout<<"Podaj miesiac wystawienia faktury.\n";
							cin>>faktura[i].miesiac_w;
							}while((faktura[i].miesiac_w<1)||(faktura[i].miesiac_w>12));
							do
							{
							cout<<"Podaj rok wystawienia faktury.\n";
							cin>>faktura[i].rok_w;
							}while((faktura[i].rok_w<1999)||(faktura[i].rok_w>2013));
							do
							{
							cout<<"Podaj dzien sprzedazy.\n";
							cin>>faktura[i].dzien_s;
							}while((faktura[i].dzien_s<1)||(faktura[i].dzien_s>31));
							do
							{
							cout<<"Podaj miesiac sprzedazy.\n";
							cin>>faktura[i].miesiac_s;
							}while((faktura[i].miesiac_s<1)||(faktura[i].miesiac_s>12));
							do
							{
							cout<<"Podaj rok sprzedazy faktury.\n";
							cin>>faktura[i].rok_s;
							}while((faktura[i].rok_s<1999)||(faktura[i].rok_s>2013));
							cout<<"Podaj miejsce wystawienia.\n";
							cin>>faktura[i].miejsce;
							cout<<"Podaj imie wystawiajacego. \n";
							cin>>faktura[i].imie_w;
							cout<<"Podaj nazwisko wystawiajacego.\n";
							cin>>faktura[i].nazwisko_w;
							cout<<"Podaj kod pocztowy (**-***).\n";
							cin>>faktura[i].kod_pocztowy;
							cout<<"Podaj nazwe firmy-nabywcy.\n";
							cin>>faktura[i].firma_nabywca;
							do
							{
							cout<<"Faktura zaplacona? 1 - tak, 0 - nie.\n";
							cin>>faktura[i].zaplacone;
							}while((faktura[i].zaplacone!=1)&&(faktura[i].zaplacone!=0));
							
						}
int q;


do
{
int x; 
cout<<"1. Wyswietla faktury wystawione dla COMARCH i zapisuje do pliku."<<endl; 
cout<<"2. Wyszukuje faktury wystawione przed 6.10.2010r."<<endl; 
cout<<"3. Usuwa faktury wystawione przed 31.12.2007 i ktore sa niezaplacone."<<endl; 
cout<<"4. Wyswietla faktury ktorych data sprzedazy jest inna niz data wystawienia"<<endl; 
cout<<"5. Oblicza i wypisuje kwoty faktur ktore nie zostaly zaplacone w poszczegolnych latach"<<endl; 
cout<<"6. Zapisuje do pliku dane faktur ktore wystawil Julian Wrzesieñ."<<endl; 
cout<<"Jaka czynnosc wykonac?"<<endl; 
cin>>x;

fstream File;
		
				switch(x)
				{
						case 1:
								{
								File.open("Comarch.txt", ios::out|ios::in);
									
										for(i=0;i<n;i++)
											{
												if((faktura[i].firma_nabywca=="COMARCH")||(faktura[i].firma_nabywca=="Comarch"))
													{
													cout<<"Nr faktury: "<<faktura[i].nr_id<<endl;
													File<<"Nr faktury: "<<faktura[i].nr_id<<endl;
													cout<<"Data wystawienia: "<<faktura[i].dzien_w;
													cout<<"."<<faktura[i].miesiac_w<<"."<<faktura[i].rok_w<<endl;
													File<<"Data wystawienia: "<<faktura[i].dzien_w;
													File<<"."<<faktura[i].miesiac_w<<"."<<faktura[i].rok_w<<endl;
													cout<<"Wystawiajacy: "<<faktura[i].imie_w<<" "<<faktura[i].nazwisko_w<<endl<<endl;
													File<<"Wystawiajacy: "<<faktura[i].imie_w<<" "<<faktura[i].nazwisko_w<<endl<<endl;
													}
											}
											
								File.close();	
								break;				
								}
						
						case 2:
								{
								
						for(i=0;i<n;i++)
						{

if((faktura[i].rok_w<2010)||((faktura[i].rok_w==2010)&&(faktura[i].miesiac_w<10))||((faktura[i].rok_w==2010)&&(faktura[i].miesiac_w==10)&&(faktura[i].dzien_w<6)))
													{
													cout<<"Nr faktury: "<<faktura[i].nr_id<<endl;
													cout<<"Data wystawienia: "<<faktura[i].dzien_w;
													cout<<"."<<faktura[i].miesiac_w<<"."<<faktura[i].rok_w<<endl;
													cout<<"Wystawiajacy: "<<faktura[i].imie_w<<" "<<faktura[i].nazwisko_w<<endl;
													}
						}
								break;	
								}
								
						case 3:
								{
									
						for(i=0;i<n;i++)
						{

if(((faktura[i].rok_w<2010)||((faktura[i].rok_w==2010)&&(faktura[i].miesiac_w<10))||((faktura[i].rok_w==2010)&&(faktura[i].miesiac_w==10)&&(faktura[i].dzien_w<6)))&&(faktura[i].zaplacone==0))
													{
													faktura[i].nr_id=-1;
													faktura[i].kwota=0;
													faktura[i].dzien_w=0;
													faktura[i].miesiac_w=0;
													faktura[i].rok_w=0;
													faktura[i].dzien_s=0;
													faktura[i].miesiac_s=0;
													faktura[i].rok_s=0;
													faktura[i].miejsce=" ";
													faktura[i].imie_w=" ";
													faktura[i].nazwisko_w=" ";
													faktura[i].kod_pocztowy=" ";
													faktura[i].firma_nabywca=" ";
													faktura[i].zaplacone=-1;
													}
						}
								break;	
								}									

						case 4:
								{
									
									for(i=0;i<n;i++)
						{

				if((faktura[i].dzien_w!=faktura[i].dzien_s)&&(faktura[i].miesiac_w!=faktura[i].miesiac_s)&&(faktura[i].rok_w!=faktura[i].rok_s))
													{
													cout<<"Nr faktury: "<<faktura[i].nr_id<<endl;
													cout<<"Data wystawienia: "<<faktura[i].dzien_w;
													cout<<"."<<faktura[i].miesiac_w<<"."<<faktura[i].rok_w<<endl;
													cout<<"Wystawiajacy: "<<faktura[i].imie_w<<" "<<faktura[i].nazwisko_w<<endl;
													}
						}
								break;	
								}
								
						case 5:
								{
									int rok_pom=1999;
									int suma=0;
									
									for(i=0;i<n;i++)
									{
										if((rok_pom==faktura[i].rok_s)&&(faktura[i].zaplacone==0))
										{
										suma=suma+faktura[i].kwota;	
										}
										else if((rok_pom!=faktura[i].rok_s)&&(faktura[i].zaplacone==0))
										{
										cout<<"W "<<rok_pom<<" roku nie zaplacono "<<suma<<" zl za faktury"<<endl;
										
										suma=0;
										suma=suma+faktura[i].kwota;
										rok_pom=faktura[i].rok_s;
										}
									}
								break;	
								}
								
						case 6:
								{
								File.open("Wrzesien.txt", ios::out|ios::in);
									
									for(i=0;i<n;i++)
									{
										
	if(((faktura[i].imie_w=="Julian")||(faktura[i].imie_w=="julian"))&&((faktura[i].nazwisko_w=="Wrzesieñ")||(faktura[i].nazwisko_w=="wrzesieñ")))
											{
											File<<"Nr faktury: "<<faktura[i].nr_id<<endl;
											File<<"Data wystawienia: "<<faktura[i].dzien_w;
											File<<"."<<faktura[i].miesiac_w<<"."<<faktura[i].rok_w<<endl;
											File<<"Wystawiajacy: "<<faktura[i].imie_w<<" "<<faktura[i].nazwisko_w<<endl;	
											}
									}
								File.close();	
								break;
								}

						default:
								{
								cout<<"Bledny wybor.\n";
								break;
								}	
				}

cout<<"Zamknac program? 1 - tak, 0 - nie.\n";
cin>>q;	
}			
while(q==0);

return 0;
}
