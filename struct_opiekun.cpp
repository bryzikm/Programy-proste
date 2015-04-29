/*Struktura Opiekun, zawieraj¹ca dane: imiê, nazwisko, data_urodzenia.
Struktura Uczestnik, zawieraj¹ca dane: imiê, nazwisko, data_urodzenia.
1. Wype³nia struktury danymi.
2. Wypisuje wszystkich uczestników i zapisuje do pliku.
3. Szuka opiekuna i wypisuje jego dane.
4. Szuka osób pe³noletnich wœród uczestników i zapisuje do pliku
5. Wypisuje opiekuna o podanym imieniu.
6. Wypisuje dane uczniów, których opiekunem by³ Jan Nowak.*/

#include<iostream>
#include<string.h>
#include<fstream>
using namespace std;

struct Opiekun
       { 
         string o_imie;
         string o_nazwisko;
         string o_data_ur;
         string o_nr_id; // nr identyfikacyjny opiekuna
		 };
         
struct Uczestnik
		{
			string u_imie;
			string u_nazwisko;
			int dzien_ur;      // zmienne przechowywujace dzien, miesiac i rok urodzenia uczestnika
			int miesiac_ur;
			int rok_ur;
			string nr_id_op; // nr identyfikacyjny opiekuna zajmuj¹cego sie danym uczestnikiem
			// zmienna pomoze polaczyc dane z 2 struktur ze soba
		};
                                  
int main()
{
int i, n;
Opiekun baza_opiekun[5000]; // deklaracja tablicy opartej na strukturze Opiekun
							//wprowadzanie danych
            do{
               cout<<"Podaj ilu opiekunow wprowadzic do bazy danych"<<endl;
               cin>>n;}
            while((n<1)||(n>5000));
            
            										
            
                            for(i=0;i<n;i++)
                            {
                                cout<<"Podaj imie opiekuna:"<<endl;
                                cin>>baza_opiekun[i].o_imie;
                                cout<<"Podaj nazwisko opiekuna:"<<endl;
                                cin>>baza_opiekun[i].o_nazwisko;
                                cout<<"Podaj date urodzenia opiekuna (format dd-mm-rrrr):"<<endl;
                                cin>>baza_opiekun[i].o_data_ur;  
                                cout<<"Podaj nr identyfikacyjny opiekuna:"<<endl;
                                cin>>baza_opiekun[i].o_nr_id;
                                cout<<endl<<endl;
                                }
                                


Uczestnik baza_uczestnik[5000]; // deklaracja tablicy opartej na strukturze Uczestnik + wprowadzenie danych

int y, z;

			do{
               cout<<"Podaj ilu uczestnikow wprowadzic do bazy danych"<<endl;
               cin>>z;}
            while((z<1)||(z>5000));
            
                            for(y=0;y<z;y++)
                            {
                                cout<<"Podaj imie uczestnika:"<<endl;
                                cin>>baza_uczestnik[y].u_imie;
                                cout<<"Podaj nazwisko uczestnika:"<<endl;
                                cin>>baza_uczestnik[y].u_nazwisko;
							
								do{
								cout<<"Podaj dzien urodzenia uczestnika:"<<endl;
                                cin>>baza_uczestnik[y].dzien_ur; 
                            	}
                                while(baza_uczestnik[y].dzien_ur>31);
							
								do{
								cout<<"Podaj miesiac urodzenia uczestnika (liczba):"<<endl;
                                cin>>baza_uczestnik[y].miesiac_ur;   
                            	}
                            	while(baza_uczestnik[y].miesiac_ur>12);
                            
							    cout<<"Podaj rok urodzenia uczestnika:"<<endl;
                                cin>>baza_uczestnik[y].rok_ur; 
                                cout<<"Podaj nr identyfikacyjny opiekuna zajmujacego sie uczestnikiem:"<<endl;
                                cin>>baza_uczestnik[y].nr_id_op;
								}

int powtorzenie; //zmienna potrzebna do powtarzania czynnosci

do
{
int x;                               
cout<<"Jaka czynnosc wykonac:"<<endl;
cout<<"    1 - wyswietlic dane wszystkich uczestnikow i zapisac do pliku,"<<endl;
cout<<"    2 - wyszukac opiekuna i wyswietlic jego dane,"<<endl;
cout<<"    3 - wyszukac osoby pelnoletnie wsrod uczestnikow i zapisac dane do pliku,"<<endl;
cout<<"    4 - wyszukac opiekuna o podanym imieniu,"<<endl;
cout<<"    5 - wypisac dane uczestnikow ktorych opiekunem byl Jan Nowak."<<endl;
cin>>x;

fstream Plik;


        switch (x)
        {
               case 1:
                    		{
                   				Plik.open("Uczestnicy.txt", ios::out|ios::in);
                   
                			for (y=0;y<z;y++)
                   							{  
                   							Plik<<baza_uczestnik[y].u_imie<<"\t";
                   							Plik<<baza_uczestnik[y].u_nazwisko<<endl;
                   							Plik<<"Data ur:"<<baza_uczestnik[y].dzien_ur<<".";
											Plik<<baza_uczestnik[y].miesiac_ur<<".";
											Plik<<baza_uczestnik[y].rok_ur<<endl<<endl;
                   
                   
                  							 } 
                   				Plik.close();     
                   
				   				break;
				   			}      
                 
				 case 2:  
                	
							{
								string szukane_nazwisko, szukane_imie; 
								// deklaracja zmiennych przechowywuj¹cych dane do wyszukania
								
								cout<<"Podaj nazwisko wyszukiwanego opiekuna:"<<endl;
								cin>>szukane_nazwisko;
								cout<<endl;
								cout<<"Podaj imie wyszukiwanego opiekuna:"<<endl;
								cin>>szukane_imie;
								cout<<endl<<endl;
								
												for(i=0;i<n;i++)				
												{
													
												if((baza_opiekun[i].o_imie==szukane_imie)&&(baza_opiekun[i].o_nazwisko==szukane_nazwisko))
														{
															cout<<baza_opiekun[i].o_imie<<"\t";
															cout<<baza_opiekun[i].o_nazwisko<<endl;
															cout<<baza_opiekun[i].o_data_ur<<endl<<endl;
															
														}
												else
													{cout<<"Brak osob o podanych danych"<<endl;
													}
												}				
							break;	
							}
				case 3:
					
							{
								int wiek=0;
								
												Plik.open("Pe³noletni.txt", ios::out|ios::in);
												for(y=0;y<z;y++)				
												{
												wiek=2013-baza_uczestnik[y].rok_ur;	
													
													if(wiek>18)
														{
															Plik<<baza_uczestnik[y].u_imie<<"\t";
															Plik<<baza_uczestnik[y].u_nazwisko<<endl;
															Plik<<"Data ur:"<<baza_uczestnik[y].dzien_ur<<".";
															Plik<<baza_uczestnik[y].miesiac_ur<<".";
															Plik<<baza_uczestnik[y].rok_ur<<endl<<endl;
															
														}
												else
													{Plik<<"Brak osob pelnoletnich"<<endl;
													}
												}		
												Plik.close();
							break;
							}	   
   
   				case 4:
   							{
   								string imie; 
						
								cout<<"Podaj imie wyszukiwanego opiekuna:"<<endl;
								cin>>imie;
								cout<<endl<<endl;
								
												for(i=0;i<n;i++)				
												{
													
												if(baza_opiekun[i].o_imie==imie)
														{
															cout<<baza_opiekun[i].o_imie<<"\t";
															cout<<baza_opiekun[i].o_nazwisko<<endl;
															cout<<baza_opiekun[i].o_data_ur<<endl<<endl;
															
														}
												else
													{
													cout<<"Brak opiekunów o podanym imieniu"<<endl;
													}
												}
								break;
   							}
   							
   				case 5:
   					{
   						string identyfikacyjny; //zmienna pomocnicza przechowywujaca nr id Jana Nowaka
   								
								   	for(i=0;i<n;i++)				
						    		{
													
										if((baza_opiekun[i].o_imie=="Jan")&&(baza_opiekun[i].o_nazwisko=="Nowak"))
										{
										identyfikacyjny=baza_opiekun[i].o_nr_id;								
										}	
                  						else
                  						{
                  						cout<<"Brak opiekunow: Jan Nowak"<<endl;
                  						}
					  				}
					  						
					  						for (y=0;y<z;y++)
                   							{  
                   							
                   							if(identyfikacyjny==baza_uczestnik[y].nr_id_op)
                   							{
                   							cout<<baza_uczestnik[y].u_imie<<"\t";
                   							cout<<baza_uczestnik[y].u_nazwisko<<endl;
                   							cout<<"Data ur:"<<baza_uczestnik[y].dzien_ur<<".";
											cout<<baza_uczestnik[y].miesiac_ur<<".";
											cout<<baza_uczestnik[y].rok_ur<<endl<<endl;
                   							}
                   							else
                   							{
                   							cout<<"Jan Nowak nie by³ opiekunem zadnego uczestnika"<<endl;
                   							}
					  					}
   					break;	
   					}
   							
   				default:
   					{
   						cout<<"Bledny wybor"<<endl<<endl;
   					}
       }
    cout<<"Powtorzyc czynnosci? Tak - 1, nie - 0"<<endl;
    cin>>powtorzenie;
	}
	while(powtorzenie==0);
    
    return 0;
}
