#include<iostream.h>
#include<string.h>
#include<math.h>
using namespace std;
int main()

{ float bk, bd, polez;
 int a, b, d, n=2, t=1, potega, c;
 
 string imie;
   
cout<<"Witaj.. Daje ci szanse, by odkupic dusze. Masz swoja szanse w mojej grze. Chce, zebys dokonal wyboru"<<endl;
 
 cout<<"\n\t1 - jesli chcesz zebym byl mily"<<endl;
 cout<<"\t2 - jesli chcesz zebym niekoniecznie byl mily"<<endl;
 cout<<"\t3 - o00ooM |3oO$hEm L0ooFf$!@m C!3m < 333 : * :* x DD x333 WyBi3sHh 3 !! "<<endl;
 
cin>>a;
cout<<"\n\n";

switch (a)
{
case 1:
{cout<<"czesc skarbie jak masz na imie? : ) \n";
cin>>imie;
cout<<imie<<" ladnie dzisiaj wygladasz :* \n";
cout<<"ciesze sie ze jestes tu ze mna\n";
cout<<"chcesz sprawdzic jaki jesem uzyteczny? moge dla Ciebie policzyc:\n"<<endl;
cout<<"\t\tpole zeszytu - wcisnij 4\n";
cout<<"\t\t9 potege 18 - wcisnij 5\n";
cout<<"\t\tnic - wcisnij 6\n";

cin>>b;

 switch (b)

 {
        case 4:// powtarzaja sie w case'ach wczesniej wiec sie nie da inaczej ,chyba ze sie da a ja nie umi
              {cout<<"to tylko poprosze o wymiary. w centymetrach zlotko. tak na oko ; ) \n";
               cout<<"najpierw bok krotszy:\t";
               cin>>bk;
               cout<<"a teraz dluzszy misiu:\t";
               cin>>bd;
    
               polez=bk*bd;
    
               cout<<"i bardzo prosze oto pole Twojego zeszytu ;)\t"<<polez<<endl;
               cout<<"m520am nadzieje, ze sie przydalem i ze kiedys sie jeszcze zobaczymy, pa :*\n\n" ;break;}

        case 5:
               {potega=pow(18,9);
                cout<<"prosze bardzo:\n";
                cout<<potega;
                cout<<"\n\nmam nadzieje, ze sie przydalem\ni ze kiedys sie jeszcze zobaczymy, pa :*\n\n"
    
                ;break;}

        case 6:
               {cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\nprosze bardzo oto nic\n";
                cout<<"mam nadzieje, ze sie przydalem\n i ze kiedys sie jeszcze zobaczymy, pa :*\n\n";
                break;}

        default:
               {cout<<"ja wiem, ze to skomplikowane wybrac jedn¹ z 3 dostepnych mozliwosci \n ale spokojnie, nastepnym razem pojdzie Ci lepiej. wierze w Ciebie :)";}
 }
;break;
}


case 2:
{cout<<"czego? ktos ty?"<<endl;
cin>>imie;
cout<<imie<<" ale cie matka skrzywdzila\n";
cout<<"Ladnie wygladasz..."<<endl;
cout<<"\n\n\n\n\n\nHiehiehie *szatanski smiech*, zartowalem"<<endl;
cout<<"chcesz czegos?"<<endl;



cout<<"\t\t\t\ttak=1 | nie=2\n";
cin>>c;


if(c==1)
  {cout<<"kur..cze mialem nadzieje, ze zostawisz mnie jednak w spokoju -.-\n";
   cout<<"ale skoro niestety juz tu jestesmy to ostatecznie moge \n Ci odpowiedziec na jedno z tych kretynskich pytan\n";


   
   cout<<"\n\t\tIle to jest 1+1? - wcisnij 7"<<endl;
   cout<<"\t\tJak witaja sie papieze? - wcisnij 8"<<endl;
   cout<<"\t\tCo to sa nibynozki? - wcisnij 9 \n";//???

   cin>>d;
   
   switch(d)
   {

          case 7:
                {cout<<"trzeba bylo uwazac na matematyce w podstawowce to bys wiedzial\n";
                cout<<"no moja cierpliwosc do Ciebie juz sie skonczyla. nara!\n\n";break;}
          case 8:
                {cout<<"eh.. wystarczylo troche pomyslec... papiez jest jeden. pewnie dalej nie czaisz ze nie ma sie z kim witac..\n";}
                cout<<"no moja cierpliwosc do Ciebie juz sie skonczyla. nara!\n\n";break;
          case 9: 
                {cout<<"trzeba bylo uwazac na biologii matole\n";
                cout<<"no moja cierpliwosc do Ciebie juz sie skonczyla. nara!\n\n";break;}
          default:
                {cout<<"jestes az takim idiota, ze nie widzisz, ze masz tylko 3 mozliwosci?";
                cout<<"mam dosc pracy z toba. nara!"<<endl<<endl;break;}
    }
}

else if(c==2)
{cout<<"chwala Bogu, norrrmalnie powiedziabym ze Cie lubie ale na to nie zaslugujesz. nara!";}
else
{cout<<"eeee miales do wyboru 1 albo 2 -.- mam dosc pracy z toba. nara!";}

;break;
}

case 3:
    {cout<<"5|<0r0 70 fFyBr4l35 70 N13 N4D4Y35h 513 d0 M47-F1Z-1nFu dZ1Ub3cZq"; 
     cout<<"1 74|< N13 B3Dz13 cHc14³0 c1 513 73G0 cZy74C Ff1êC P15hê 7u bYl3 C0."; 
     cout<<"ByFf4y, M1³3G0 zFf13Dz4n14 73y y4|<¿3c13|<4fF3Y 5h|<0³Y.";
     cout<<"1 p0fF0Dz3n14 fF FfYb0rZ3 5H|<0³y. Z3By$ N13 ¿4³0Ff4³ :*** :*:* xP ;) ^^ \n\n";break;}




}
system("pause");
}
