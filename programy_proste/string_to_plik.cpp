/*

Zapisanie tablicy stringów w pliku 

*/
#include <fstream>
#include <string>
   
int main()
   { ofstream strWyj;
     
	string nazwaPliku,
   
   slowa[]={"ala","ma","kota","i","wiele","innych","zwierzat"};
     cout<<"Podaj nazwe pliku do zapisu:";
     cin>>nazwaPliku;
     strWyj.open(nazwaPliku.c_str());
     if(strWyj.fail())
     { cerr<<"Otwarcie pliku nie powiodlo sie!!!";
       return -1;
     }
     for(int i=0; i<(sizeof(slowa)/sizeof(string)); i++)
       strWyj<<slowa[i]<<endl;
     strWyj.close();
     return 0;
   }
