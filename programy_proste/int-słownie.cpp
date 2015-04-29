/*
zamienia cyfry arabskie na rzymskie
*/

#include <iostream>
#include <conio.h>

using namespace std;

int arabska (int a)
{
  switch ((a/10000)%10)
  {
      case 9: cout << _pl("dziewi��setysi�cy"); break;
      case 8: cout << _pl("osiemsetysi�cy"); break;
      case 7: cout << _pl("siedemsetysi�cy"); break;
      case 6: cout << _pl("sze��setysi�cy"); break;
      case 5: cout << _pl("pi��settysi�cy"); break;
      case 4: cout << _pl("czterstatysi�cy"); break;
      case 3: cout << _pl("trzystatysi�cy"); break;
      case 2: cout << _pl("dwie�cietysiace"); break;
      case 1: cout << _pl("stotysiecy"); break;
  }
  
  switch ((a/1000)%10)
  {
      case 9: cout << _pl("dziewi��tysiecy"); break;
      case 8: cout << _pl("osiemtysi�cy"); break;
      case 7: cout << _pl("siedemtysi�cy"); break;
      case 6: cout << _pl("sze��tysi�cy"); break;
      case 5: cout << _pl("pi��tysi�cy"); break;
      case 4: cout << _pl("czterytyci�ce"); break;
      case 3: cout << _pl("trzytyci�ce"); break;
      case 2: cout << _pl("dwatysiace"); break;
      case 1: cout << _pl("tysi�c"); break;
  }
  switch ((a/100)%10)
  {
      case 9: cout << _pl("dziewie�set"); break;
      case 8: cout << _pl("osiemset"); break;
      case 7: cout << _pl("siedemset"); break;
      case 6: cout << _pl("sze��set"); break;
      case 5: cout << _pl("pi��set"); break;
      case 4: cout << _pl("czterysta"); break;
      case 3: cout << _pl("trzysta"); break;
      case 2: cout << _pl("dzie�cie"); break;
      case 1: cout << _pl("sto"); break;
  }
  switch ((a/10)%10)
  {
      case 9: cout << _pl("dziewi�dziesi�t"); break;
      case 8: cout << _pl("osiemdziesi�t"); break;
      case 7: cout << _pl("siedemdziesi�t"); break;
      case 6: cout << _pl("sze��dziesi�t"); break;
      case 5: cout << _pl("pi��dziesi�t"); break;
      case 4: cout << _pl("czterdzie�ci"); break;
      case 3: cout << _pl("trzydzei�ci"); break;
      case 2: cout << _pl("dwadzie�cia"); break;
  }
  
 
  switch (20)
  {
      case 19: cout << _pl("dziewietna�cie"); break;
      case 18: cout << _pl("osiemna�cie"); break;
      case 17: cout << _pl("siedemna�cie"); break;
      case 16: cout << _pl("szesna�cie"); break;
      case 15: cout << _pl("pietnascie"); break;
      case 14: cout << _pl("czterna�cie"); break;
      case 13: cout << _pl("trzyna�cie"); break;
      case 12: cout << _pl("dwane�cie"); break;
      case 11: cout << _pl("jedena�cie"); break;   
      case 10: cout << _pl("dziesi��"); break; 
      case 9: cout << _pl("dziewi��"); break;
      case 8: cout << _pl("osiem"); break;
      case 7: cout << _pl("siedem"); break;
      case 6: cout << _pl("sze��"); break;
      case 5: cout << _pl("pi��"); break;
      case 4: cout << _pl("cztery"); break;
      case 3: cout << _pl("trzy"); break;
      case 2: cout << _pl("dwa"); break;
      case 1: cout << _pl("jeden"); break;
  }

}  

int main()
{
 cout << _pl("Program pisze s�ownie wprowadzone cyfry\n");
 cout << endl;
 int x;
 for (;;)  // zapetlenie petli
 {
     cout << _pl("Podaj liczbe cyfre : ");
     cin >> x;
     cout << _pl("S�owny zapis liczby to: ");
     arabska(x);
     cout << endl << endl;
 }
}
