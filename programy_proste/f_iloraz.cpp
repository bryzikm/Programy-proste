/*4. Napisz funkcj� ILORAZ wyznaczaj�c� iloraz dw�ch zadanych liczb ca�kowitych. 
Dzia�anie funkcji sprawd� pisz�c odpowiedni program*/

#include<iostream.h>

float Iloraz(float a, float b)
{
float iloraz;

cout<<"Podaj a"<<endl;
cin>>a;
cout<<"Podaj b"<<endl;
cin>>b;
iloraz=a/b;
return iloraz;
}

int main()
{
float a, b;

cout<<"Iloraz: "<<Iloraz(a,b)<<endl;

system("pause");
}
