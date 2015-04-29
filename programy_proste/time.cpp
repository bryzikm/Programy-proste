/*
program odliczaj¹cy czas
*/

#include <iostream>
#include <time.h>

using namespace std;

int main ()
{
  time_t start,end;
  double dif;

cout << "Podaj czas w s do odmierzenia";
int czas;
cin >> czas;

time (&start);

while(dif < czas) {
dif = difftime(end,start);
time (&end);
}

cout << "minelo " << czas << " s";



getchar();
return 0;
}
