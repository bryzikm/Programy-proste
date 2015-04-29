#include <iostream.h>
#include <conio.h>
#define nmax 100
main()
{
 clrscr();
 cout<<"PROGRAM WCZYTUJE DANE DO TABLICY I PODAJE NA KTOREJ POZYCJI JEST LITERA\n";
 char t[nmax];
 int i,m;
 cout<<"Podaj ile znakow bedziesz podawal: ";
 cin>>m;
 for (i=0;i<m;i++)
  {
   cout<<i+1<<" znak ";
   cin>>t[i];
  }
 for (i=0;i<m;i++)
  if ((t[i]>='a' && t[i]<='z') | (t[i]>='A' && t[i]<='Z'))
  {
   cout<<"Pozycja "<<i+1<<" litera "<<t[i];
   cout<<endl;
  }
getch();
}
