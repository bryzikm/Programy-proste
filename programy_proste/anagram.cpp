
#include <iostream.h>

#include <string.h>

#include<conio.h>

#define BUF_SIZE 100




int anagram(char[]);


void zamiana(char&,char&);



int main()
{
  char L[BUF_SIZE];


  
  cout << " Podaj lancuch znaków : ";

    cin.get(L,BUF_SIZE);

  anagram(L);

  
  cout << "Anagram podanego lancucha to \n" << L << endl;


  return 0;
  

getch();
}



// ........................



int zamiana(char &x,char &y)
{
  char pom=x;

  x=y;

  y=pom;
}



int anagram(char L[])
{
  int i;

  int dl=strlen(L);  
// funkcja strlen zwraca dlugosc lancucha



  for ( i=0 ; i<dl/2 ; i++ )

    zamiana(L[i],L[dl-1-i]);

}
  
    
