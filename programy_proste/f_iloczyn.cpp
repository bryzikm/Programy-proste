/*3. Napisz funkcjê ILOCZYN wyznaczaj¹c¹ iloczyn dwóch zadanych liczb ca³kowitych. 
Dzia³anie funkcji sprawdŸ pisz¹c odpowiedni program.*/

#include<iostream.h>

int Iloczyn(int a, int b)
{
int iloczyn;

cout<<"Podaj a"<<endl;
cin>>a;
cout<<"Podaj b"<<endl;
cin>>b;

iloczyn=a*b;
return iloczyn;
}
//koniec funkcji
int main()
{
int a, b;    
    
cout<<"Iloczyn: "<<Iloczyn(a,b)<<endl;    
system("pause");    
}
