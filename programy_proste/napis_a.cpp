/*
program ktory wypisuje czy w w jakims napisie wystepuje literka a
*/

#include <cstdlib>
#include <string.h>
#include <iostream>

using namespace std;
int main()
{
char napis[100];
cout<<"Podaj napis do wczytania\n";
cin>>napis;
int i,a=0;

for (i=0; i<strlen(napis); i++)

if (napis[i]=='a' || napis[i]=='A')
a++;

if (a>0)
{
cout<<"W tekscie wystepuje litera a";
}else

{
cout<<"W tekscie nie wystepuje litra a";
}

system("PAUSE");
return 0;
}
