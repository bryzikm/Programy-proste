/*Struktura Volleyball, zawieraj¹ca dane: imiê, nazwisko, rok_urodzenia, pensja[tyœ z³], klub, narodowoœæ, pozycja, wzrost.
1. Wype³nia strukturê danymi
2. Wyszukuje zawodników graj¹cych w poszczególnych klubach.
3. Liczy ilu zawodników graj¹cych w poszczególnych klubach.
4.wypisuje w którym klubie wystepuje Bartosz Kurek.
5.Zapisuje do pliku dane zawodników których zarobki przekraczaj¹ 80000 z³ na miesi¹c.
6. Usuwa z bazy zawodników których wiek pzekracza 37 lat.
7. Zapisz do pliku dane zawodników graj¹cych jako rozgrywaj¹cy i których wzrost przekracza 204 cm.*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

struct Volleyball{
					string imie;
					string nazwisko;
					int rok_urodzenia;
					int pensja;
					string klub;
					string narodowosc;
					string pozycja;
					int wzrost;
				};
				
int main()
{
	int i=0, n=0;

Volleyball baza[10000];

	do{
		cout<<"Ilu zawodnikow wprowadzic do bazy danych?"<<endl;
		cin>>n;	
	  }
	  while((n<0)&&(n>10000));
	
				for(i=0;i<n;i++)
				{
					cout<<"Podaj imie zawodnika"<<endl;
					cin>>baza[i].imie;
					cout<<"Podaj nazwisko zawodnika"<<endl;
					cin>>baza[i].nazwisko;
					cout<<"Wprowadz rok urodzenia"<<endl;
					cin>>baza[i].rok_urodzenia;
					cout<<"Podaj pensje ( w zlotowkach )"<<endl;
					cin>>baza[i].pensja;
					cout<<"Podaj klub"<<endl;
					cin>>baza[i].klub;
					cout<<"Podaj narodowosc"<<endl;
					cin>>baza[i].narodowosc;
					cout<<"Podaj pozycje na boisku"<<endl;
					cin>>baza[i].pozycja;
					cout<<"Podaj wzrost"<<endl;
					cin>>baza[i].wzrost;
				}
	int y;
	
	do
	{
	int x=0;
		
	cout<<"Menu:"<<endl;
	cout<<"1 - wyszukuje zawodnikow grajacych w poszczegolnych klubach"<<endl;
	cout<<"2 - liczy ilu zawodnikow gra w poszczegolnych klubach"<<endl;
	cout<<"3 - wypisuje w ktorym klubie gra Bartosz Kurek"<<endl;
	cout<<"4 - zapisuje do pliku dane zawodnikow ktorych pensja jest wieksza niz 80 tys. miesiecznie"<<endl;
	cout<<"5 - usuwa z bazy zawodnikow ktorych wiek przekracza 37 lat"<<endl;
	cout<<"6 - zapisuje do pliku rozgrywajacych ktorych wzrost jest wiekszy niz 204 cm"<<endl;
	cin>>x;
	
	fstream Plik;
	
				switch(x)
						{
							case 1:
								   { string klub_pom; //zmienna pomocnicza przechowywujaca nazwe klubu
								   klub_pom=baza[0].klub;
								   
								   					for(i=0;i<n;i++)
								   					{
								   						
								   							if(baza[i].klub==klub_pom)
								   							{
								   								cout<<baza[i].klub<<":"<<endl;
								   								cout<<baza[i].imie<<"\t";
								   								cout<<baza[i].nazwisko<<endl;
								   							}
								   							else if(baza[i].klub!=klub_pom)
								   							{
								   								klub_pom=baza[i].klub;
								   								cout<<baza[i].klub<<":"<<endl;
								   								cout<<baza[i].imie<<"\t";
								   								cout<<baza[i].nazwisko<<endl;
								   							}
								   							
								   								
								   					}
								break;
								   }
								   
							case 2:
									{ string klub_pom2; //zmienna pomocnicza przechowywujaca nazwe klubu
									  int licznik=0;
									  
								    klub_pom2=baza[0].klub;
								   
								   					for(i=0;i<n;i++)
								   					{
								   						
								   							if((baza[i].narodowosc=="Hiszpania")||(baza[i].narodowosc=="hiszpania"))
								   							{
								   							licznik++;
								   							}
								   								
								   					}
								   	cout<<"W klubach gra "<<licznik<<" zawodnikow pochodzenia hiszpanskiego\n";
								break;
										
									}
									
							case 3:
									{
											for(i=0;i<n;i++)
												{
													
					if(((baza[i].imie=="Bartosz")||(baza[i].imie=="bartosz"))&&((baza[i].nazwisko=="Kurek")||(baza[i].nazwisko=="kurek")))
													{
													cout<<"Klub Bartosza Kurka to: "<<baza[i].klub<<endl;
													}	
												
												}										
									break;	
									}
									
							case 4:
									{
									Plik.open("Pensja.txt", ios::out|ios::in);
										
									Plik<<"Zawodnicy ktorych pensja przekracza 80 000:"<<endl;
											for(i=0;i<n;i++)
												{
													
														if(baza[i].pensja>80000)
															{
												Plik<<baza[i].imie<<" "<<baza[i].nazwisko<<" "<<baza[i].narodowosc<<" "<<baza[i].klub<<endl;
															}
													
												}
											
									Plik.close();
									break;		
									}
									
							case 5:
									{
											for(i=0;i<n;i++)
												{
												int wiek_zawodnika;
												wiek_zawodnika=2013-baza[i].rok_urodzenia;
												
													if(wiek_zawodnika>37)
														{
															baza[i].imie=" ";
															baza[i].nazwisko=" ";
															baza[i].rok_urodzenia=0;
															baza[i].pensja=0;
															baza[i].klub=" ";
															baza[i].narodowosc=" ";
															baza[i].pozycja=" ";
															baza[i].wzrost=0;
														}
													
												}
									break;
									}
							
							case 6:
									{
									Plik.open("Zawodnik.txt", ios::out|ios::in);
									Plik<<"Rozgrywajacy o wzroscie przekraczajacym 204 cm:\n";	
										
										for(i=0;i<n;i++)
											{
												if((baza[i].pozycja=="rozgrywaj¹cy")&&(baza[i].wzrost>204))
													{
														Plik<<baza[i].imie<<" "<<baza[i].nazwisko<<endl;
													}
											}
											
									Plik.close();
									break;
									}
								
							default:
									{
									cout<<"Wybierz ponownie.\n";
									break;
									}	
								
						}
						
	cout<<"Powtorzyc dzialanie? 1 - nie, 0 - tak\n";
	cin>>y;					
						
	}while(y==0);
	
	return 0;
}
