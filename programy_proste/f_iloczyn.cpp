/*3. Napisz funkcj� ILOCZYN wyznaczaj�c� iloczyn dw�ch zadanych liczb ca�kowitych. 
Dzia�anie funkcji sprawd� pisz�c odpowiedni program.*/

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
