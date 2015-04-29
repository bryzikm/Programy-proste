/*1.a. program obliczaj¹cy œredni¹ 3 liczb a,b,c n-razy*/
#include<iostream.h>

float srednia(float a, float b, float c)
{
float Srednia;
cout<<"Podaj a, b i c"<<endl;
cin>>a>>b>>c;
Srednia=(a+b+c)/3;

return Srednia;
}
int main()
{
float a, b, c; 
int n;

do    
{cout<<"Podaj ile razy"<<endl;
cin>>n;}
while(n<=2);

for(int i=0;i<n;i++)
{    
cout<<"Srednia 1 wynosi: "<<srednia(a,b,c)<<endl<<endl;}
system("pause");    
}
