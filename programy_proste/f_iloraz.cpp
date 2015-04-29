/*4. Napisz funkcjê ILORAZ wyznaczaj¹c¹ iloraz dwóch zadanych liczb ca³kowitych. 
Dzia³anie funkcji sprawdŸ pisz¹c odpowiedni program*/

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
