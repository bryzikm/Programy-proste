/*
zamienia cyfry arabskie na rzymskie
*/

#include <iostream>

using namespace std;

int arabska (int a)
{
   cout << a%10 << "," << (a/10)%10 << "," << (a/100)%10 << "," << (a/1000)%10 << endl;
   switch ((a/1000)%10)
   {
       case 3: cout << "MMM"; break;
       case 2: cout << "MM"; break;
       case 1: cout << "M"; break;
   }
   switch ((a/100)%10)
   {
       case 9: cout << "CM"; break;
       case 8: cout << "DCCC"; break;
       case 7: cout << "DCC"; break;
       case 6: cout << "DC"; break;
       case 5: cout << "D"; break;
       case 4: cout << "CD"; break;
       case 3: cout << "CCC"; break;
       case 2: cout << "CC"; break;
       case 1: cout << "C"; break;
   }
   switch ((a/10)%10)
   {
       case 9: cout << "XC"; break;
       case 8: cout << "LXXX"; break;
       case 7: cout << "LXX"; break;
       case 6: cout << "LX"; break;
       case 5: cout << "L"; break;
       case 4: cout << "XL"; break;
       case 3: cout << "XXX"; break;
       case 2: cout << "XX"; break;
       case 1: cout << "X"; break;
   }
   switch (a%10)
   {
       case 9: cout << "IX"; break;
       case 8: cout << "VIII"; break;
       case 7: cout << "VII"; break;
       case 6: cout << "VI"; break;
       case 5: cout << "V"; break;
       case 4: cout << "IV"; break;
       case 3: cout << "III"; break;
       case 2: cout << "II"; break;
       case 1: cout << "I"; break;
   }

}  

int main()
{
  cout << "Program zamienia liczbe arabska w rzymska'";
  cout << endl;
  int x;
  for (;;)  // zapetlenie petli
  {
      cout << "Podaj liczbe arabska : ";
      cin >> x;
      cout << "Zapis rzymski liczby to: ";
      arabska(x);
      cout << endl << endl;
  }
  system("PAUSE");
}
