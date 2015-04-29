/*

Kopiowanie zawartoœci pliku znak po znaku 

*/

#include <fstream>
#include <string>

   int main()
   { 
     fstream strWej,strWyj;
     string nazwaPliku;
     char znak;
     cout<<"Podaj nazwe pliku do odczytu:";
     cin>>nazwaPliku;
     strWej.open(nazwaPliku.c_str(),ios::in);
     if(strWej.fail())
     { cerr<<"Otwarcie pliku do odczytu nie powiodlo sie!"<<endl;
       return -1;
     }
     cout<<"Podaj nazwe pliku do zapisu:";
     cin>>nazwaPliku;
     strWyj.open(nazwaPliku.c_str(),ios::out);
     if(strWyj.fail())
     { cerr<<"Otwarcie pliku do zapisu nie powiodlo sie!"<<endl;
       return -1;
     }
     strWej.get(znak);
     while(!strWej.eof())
     { strWyj.put(znak);
       strWej.get(znak);
     }
     return 0;
   }

