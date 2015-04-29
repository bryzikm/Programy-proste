#include <iostream.h>
#include <conio.h>
#define nmax 100
main()
{
 clrscr();
 cout<<"PROGRAM WCZYTUJE DANE DO TABLICY I PODAJE CZY ISTNIEJE PARA JEDNAKOWYCH\n";
 char t[nmax];
 int i,j,m,istnieje;
 istnieje=0;
 cout<<"Podaj ile znakow bedziesz podawal: ";
 cin>>m;
 for (i=0;i<m;i++)
  {
   cout<<i+1<<" znak ";
   cin>>t[i];
  }
 for (i=0;i<m;i++)
 for (j=i+1;j<m;j++)
  if (t[i]==t[j])
   istnieje=1;
   cout<<endl;
   if (istnieje==1) cout<<"Para takich samych elementow istnieje";
   else cout<<"Nie ma pary jednakowych elementow";
getch();
return 0;
}
