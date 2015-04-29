/* Struktura Studenci, zawieraj¹ca dane:imiê,nazwisko, data_urodzenia, nr_indeksu,ocena, który_semestr,powtarza. 
1.Dodaje studentów do bazy 
2.wyœwietla studentów i zapisuje wynik do pliku 
3.usuwa studentów 
4.Liczy ile studentów zaliczy³o przedmiot(ocena>1)
5.Wyœwietla dane konkretnego studenta,wg nazwiska 
6.liczy ile osób jest na danym kierunku i zapisuje do pliku 
7.wypisuje studentów którzy zaliczyli semestr III */ 

#include<iostream> 
#include<fstream> 
#include<string>

using namespace std; 

struct Studenci { string imie; 
				  string nazwisko; 
				  string data_urodzenia; 
				  int nr_indeksu; 
				  double ocena; 
				  int ktory_semestr; 
				  int powtarza; 
				  string kierunek; //kierunek na jaki uczeszcza student
				  }; 
int main() { 
int ile=0; 
do 
{ cout<<"Podaj ilu studentow chcesz wprowadzic "<<endl; cin>>ile; }
while((ile<=1)&&(ile>1000)); 

Studenci student[1000]; 
			
			for(int i=1;i<=ile;i++) 
			
			{
			cout<<"Podaj imie "<<i<<" studenta"<<endl; 
			cin>>student[i].imie; 
			cout<<"Podaj nazwisko "<<i<<" studenta"<<endl; 
			cin>>student[i].nazwisko; 
			cout<<"Podaj date urodzenia "<<i<<" studenta (dd-mm-rrrr)"<<endl; 
			cin>>student[i].data_urodzenia; 
			cout<<"Podaj numer indeksu "<<i<<" studenta"<<endl; 
			cin>>student[i].nr_indeksu; 
			cout<<"Podaj ocene "<<i<<" studenta"<<endl; 
			cin>>student[i].ocena; 
			cout<<"Podaj semestr "<<i<<" studenta"<<endl; 
			cin>>student[i].ktory_semestr; 
			cout<<"Podaj czy "<<i<<" student powtarza semestr( 0 - nie, 1 - tak )"<<endl; 
			cin>>student[i].powtarza; 
			cout<<"Podaj kierunek na ktory uczeszcza student"<<endl; 
			cin>>student[i].kierunek; 
			} 

 int q;
do 
{ 

int co; 
cout<<"1. Dodaje studentow do bazy."<<endl; 
cout<<"2. Wyswietla studentow i zapisuje wynik do pliku."<<endl; 
cout<<"3. Usuwa studentow."<<endl; 
cout<<"4. Liczy ile studentow zaliczylo przedmiot(ocena>1)"<<endl; 
cout<<"5. Wyswietla dane konkretnego studenta,wg nazwiska"<<endl; 
cout<<"6. Liczy ile osób jest na danym kierunku i zapisuje do pliku."<<endl; 
cout<<"7. Wypisuje studentow którzy zaliczyli semestr III"<<endl; 
cout<<"Co mam zrobic ?"<<endl; 
cin>>co; 
				switch(co) 
				{ 
				case 1: 
					{ int tmp=ile+1; 
					  int ilosc; 
					  
					  cout<<"Podaj ilu studentow chcesz dopisac?"<<endl; 
					  cin>>ilosc; 
					  int ile2=tmp+ilosc; // ilosc ostatniego studenta 
					  
					  for(int i=tmp;i<ile2;i++) 
					  { 
					  cout<<"Podaj imie "<<i<<" studenta"<<endl; 
					  cin>>student[i].imie; 
					  cout<<"Podaj nazwisko "<<i<<" studenta"<<endl; 
					  cin>>student[i].nazwisko; 
					  cout<<"Podaj date urodzenia "<<i<<" studenta (dd-mm-rrrr)"<<endl; 
					  cin>>student[i].data_urodzenia; 
					  cout<<"Podaj numer indeksu "<<i<<" studenta"<<endl; 
					  cin>>student[i].nr_indeksu; 
					  cout<<"Podaj ocene "<<i<<" studenta"<<endl; 
					  cin>>student[i].ocena; 
					  cout<<"Podaj semestr "<<i<<" studenta"<<endl; 
					  cin>>student[i].ktory_semestr; 
					  cout<<"Podaj czy "<<i<<" student powtarza semestr"<<endl; 
					  cin>>student[i].powtarza; 
					  cout<<"Podaj kierunek na ktory uczeszcza student"<<endl; 
					  cin>>student[i].kierunek; 
					  } 
					  ile=ile2; 
					  break; } 
					  
				case 2: 
					{ 
					fstream zapis; 
					zapis.open("Studenci.txt"); 
									for(int i=1;i<=ile;i++) 
									{ 
									cout<<student[i].imie<<endl; 
									zapis<<student[i].imie<<endl; 
									cout<<student[i].nazwisko<<endl; 
									zapis<<student[i].nazwisko<<endl; 
									cout<<student[i].data_urodzenia<<endl; 
									zapis<<student[i].data_urodzenia<<endl; 
									cout<<student[i].nr_indeksu<<endl; 
									zapis<<student[i].nr_indeksu<<endl; 
									cout<<student[i].ocena<<endl; 
									zapis<<student[i].ocena<<endl; 
									cout<<student[i].ktory_semestr<<endl; 
									zapis<<student[i].ktory_semestr<<endl; 
									cout<<student[i].powtarza<<endl; 
									zapis<<student[i].powtarza<<endl;
									cout<<student[i].kierunek<<endl; 
									zapis<<student[i].kierunek<<endl;
									} 
					zapis.close(); 
					   break; } 
					   
				case 3: 
					{ 
									for(int i=1;i<=ile;i++) 
									{ 
									student[i].imie=" "; 
									student[i].nazwisko=" "; 
									student[i].data_urodzenia=" "; 
									student[i].nr_indeksu=0; 
									student[i].ocena=0; 
									student[i].ktory_semestr=0; 
									student[i].powtarza=0; 
									} 
						break; }
						 
				case 4: 
					{ 
					int suma=0; 
									for(int i=1;i<=ile;i++) 
									{ 
									if(student[i].ocena>1) 
									{ suma=suma+1; } 
									} 
									cout<<"Przedmiot zaliczylo : "<<suma<<" osob."<<endl; 
						break; } 
						
				case 5: 
					{ 
					string nazwisko_szuk; //zmienna przechowywujaca nazwisko studenta ktorego dane program wyszuka
					
					cout<<"Podaj nazwisko poszukiwanego studenta:"<<endl;
					cin>>nazwisko_szuk;
					
									for(int i=1;i<=ile;i++) 
									{ 
										if(student[i].nazwisko==nazwisko_szuk) 
										{ 
											cout<<student[i].imie<<endl; 
											cout<<student[i].nazwisko<<endl; 
											cout<<student[i].data_urodzenia<<endl; 
											cout<<student[i].nr_indeksu<<endl;; 
											cout<<student[i].ocena<<endl; 
											cout<<student[i].ktory_semestr<<endl; 
											cout<<student[i].powtarza<<endl; 
											cout<<student[i].kierunek;
										} 
									} 
						break; } 
						
				case 6: 
					{ 
					fstream zapisz; 
					string kierunek_szuk; //kierunek ktorego studentow nale¿y zliczyc
					int licznik=0; 
					
					cout<<"Podaj kierunek dla ktorego zliczyc studentow"<<endl;
					cin>>kierunek_szuk;
					
					zapisz.open("Ilosc.txt"); 
									
									for(int i=1;i<=ile;i++) 
									{ 
										if(student[i].kierunek==kierunek_szuk)
										{
											licznik=licznik+1;
										}
									} 
							zapisz<<"Na kierunku "<<kierunek_szuk<<" jest "<<licznik<<" studentow"<<endl;
					zapisz.close(); 
						break; } 
						
				case 7: 
					{ 
									for(int i=1;i<=ile;i++) 
									{ 
										if(student[i].ktory_semestr>3) 
										{ 
											cout<<student[i].imie<<" "<<student[i].nazwisko<<endl; 
										} 
									} 
						break; } 
				default: 
					{ 
						cout<<"bledne dane"<<endl; 
						break; 
					} 
				} 

				
cout<<"Czy zakonczyc program? tak=1 , nie=0"<<endl; 
cin>>q;
}
while(q==0); 

return 0;
}
