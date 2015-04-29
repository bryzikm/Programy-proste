/*

Znajdowanie najd³u¿szego s³owa w pliku 

*/

 #include <fstream>
   #include <string>
   int main()
   { ifstream strWej;
     string slowo, najdluzsze, nazwaPliku;
     int iloscSlow=0;
     cout<<"Podaj nazwe pliku: ";
     cin>>nazwaPliku;
     strWej.open( nazwaPliku.c_str() );
     if( strWej.fail() )
     { cerr<<"Otwarcie pliku nie powiodlo sie!!!"<<endl;
        return -1;
     }
     do
     { strWej>>slowo;
       iloscSlow++;
       if( slowo.length()>najdluzsze.length() )
         najdluzsze=slowo;
     }while(!strWej.eof());
     strWej.close();
     cout<<"Liczba slow w pliku: "<<iloscSlow<<endl
           <<"Najdluzsze to: "<<najdluzsze<<endl;
     return 0;
   }
