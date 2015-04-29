#include <iostream.h>
#include <iomanip.h>

#define MAXROZ  100

int main(void)
{
int n, i, pom;
int tab[MAXROZ];
int zmiana;
cout <<"Podaj liczbe elementow w tablicy"<< endl;
cin >> n;
cout<< "______________________________________"<< endl;
for (i=0; i<n; i++)
{
cout << "Podaj " << i <<"Wartosc" << endl;
cin >>  tab[i];
 }

   zmiana = 1;
   while (zmiana){
   zmiana=0;
      for (i=0;i<n-1;i++)
          if (tab[i] > tab[i+1]){
          pom = tab[i];
          tab[i]=tab[i+1];
          tab[i+1]=pom;zmiana = 1;
          }
}
cout <<"_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_--"<<endl;
  cout << "Teraz tabela"<< endl;
  for (i=0;i<n;i++)
  cout << setw(4)<<tab[i];
  char p;
  cin >> p;


  return 0;
}


