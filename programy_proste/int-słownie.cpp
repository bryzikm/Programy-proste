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
      case 9: cout << _pl("dziewiêæsetysiêcy"); break;
      case 8: cout << _pl("osiemsetysiêcy"); break;
      case 7: cout << _pl("siedemsetysiêcy"); break;
      case 6: cout << _pl("szeœæsetysiêcy"); break;
      case 5: cout << _pl("piêæsettysiêcy"); break;
      case 4: cout << _pl("czterstatysiêcy"); break;
      case 3: cout << _pl("trzystatysiêcy"); break;
      case 2: cout << _pl("dwieœcietysiace"); break;
      case 1: cout << _pl("stotysiecy"); break;
  }
  
  switch ((a/1000)%10)
  {
      case 9: cout << _pl("dziewiêætysiecy"); break;
      case 8: cout << _pl("osiemtysiêcy"); break;
      case 7: cout << _pl("siedemtysiêcy"); break;
      case 6: cout << _pl("szeœætysiêcy"); break;
      case 5: cout << _pl("piêætysiêcy"); break;
      case 4: cout << _pl("czterytyci¹ce"); break;
      case 3: cout << _pl("trzytyci¹ce"); break;
      case 2: cout << _pl("dwatysiace"); break;
      case 1: cout << _pl("tysi¹c"); break;
  }
  switch ((a/100)%10)
  {
      case 9: cout << _pl("dziewieæset"); break;
      case 8: cout << _pl("osiemset"); break;
      case 7: cout << _pl("siedemset"); break;
      case 6: cout << _pl("szeœæset"); break;
      case 5: cout << _pl("piêæset"); break;
      case 4: cout << _pl("czterysta"); break;
      case 3: cout << _pl("trzysta"); break;
      case 2: cout << _pl("dzieœcie"); break;
      case 1: cout << _pl("sto"); break;
  }
  switch ((a/10)%10)
  {
      case 9: cout << _pl("dziewiêdziesi¹t"); break;
      case 8: cout << _pl("osiemdziesi¹t"); break;
      case 7: cout << _pl("siedemdziesi¹t"); break;
      case 6: cout << _pl("szeœædziesi¹t"); break;
      case 5: cout << _pl("piêædziesi¹t"); break;
      case 4: cout << _pl("czterdzieœci"); break;
      case 3: cout << _pl("trzydzeiœci"); break;
      case 2: cout << _pl("dwadzieœcia"); break;
  }
  
 
  switch (20)
  {
      case 19: cout << _pl("dziewietnaœcie"); break;
      case 18: cout << _pl("osiemnaœcie"); break;
      case 17: cout << _pl("siedemnaœcie"); break;
      case 16: cout << _pl("szesnaœcie"); break;
      case 15: cout << _pl("pietnascie"); break;
      case 14: cout << _pl("czternaœcie"); break;
      case 13: cout << _pl("trzynaœcie"); break;
      case 12: cout << _pl("dwaneœcie"); break;
      case 11: cout << _pl("jedenaœcie"); break;   
      case 10: cout << _pl("dziesiêæ"); break; 
      case 9: cout << _pl("dziewiêæ"); break;
      case 8: cout << _pl("osiem"); break;
      case 7: cout << _pl("siedem"); break;
      case 6: cout << _pl("szeœæ"); break;
      case 5: cout << _pl("piêæ"); break;
      case 4: cout << _pl("cztery"); break;
      case 3: cout << _pl("trzy"); break;
      case 2: cout << _pl("dwa"); break;
      case 1: cout << _pl("jeden"); break;
  }

}  

int main()
{
 cout << _pl("Program pisze s³ownie wprowadzone cyfry\n");
 cout << endl;
 int x;
 for (;;)  // zapetlenie petli
 {
     cout << _pl("Podaj liczbe cyfre : ");
     cin >> x;
     cout << _pl("S³owny zapis liczby to: ");
     arabska(x);
     cout << endl << endl;
 }
}
