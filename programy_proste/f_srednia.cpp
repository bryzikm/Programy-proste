/*1. program obliczaj¹cy œredni¹ 3 liczb a,b,c przy u¿yciu funkcji srednia*/
#include<iostream.h>

float srednia(int a, int b, int c)
{
int Srednia;
cout<<"Podaj a, b i c"<<endl;
cin>>a>>b>>c;
Srednia=(a+b+c)/3;

return Srednia;
}
int main()
{
int a, b, c;    
    
cout<<"Srednia 1 wynosi: "<<srednia(a,b,c)<<endl;
system("pause");    
}
