/*3. Program obliczaj¹cy i wypisuj¹cy, w zale¿noœci od wartosci zmiennej x :
x=1 pole ko³a
x=2 pole prostopad³oœcianu
x=3  pole trójk¹ta*/

#include<iostream.h>
#include<math.h>

float pk(float r)
{
float pkk;      
      do
      {cout<<"Podaj r"<<endl;
      cin>>r;}
      while(r<=0);
      
pkk=M_PI*pow(r,2);

return pkk;}

int pp(int a, int b, int c)
{
int ppp;
        do
        {cout<<"Podaj a"<<endl;
        cin>>a;}
        while(a<=0);
        
        do
        {cout<<"Podaj b"<<endl;
        cin>>b;}
        while(b<=0);
        
        do
        {cout<<"Podaj c"<<endl;
        cin>>c;}
        while(c<=0);
        
ppp=2*a*b+2*a*c+2*b*c;

return ppp;}

float pt(float a, float h)
{
float ptt;
          do
        {cout<<"Podaj a"<<endl;
        cin>>a;}
        while(a<=0);
        
        do
        {cout<<"Podaj h"<<endl;
        cin>>h;}
        while(h<=0);
        
ptt=(a*h)/2;

return ptt;}

int main()
{
int x, r, a, b, c, h;  
    
cout<<"x=1 pole kola"<<endl;
cout<<"x=2 pole prostopadloscianu"<<endl;
cout<<"x=3  pole trojkata"<<endl;
cout<<"Wybieraj x"<<endl;
cin>>x;

switch (x)
{
       case 1:  {
                 cout<<"Pole kola: "<<pk(r)<<endl;
                 
                 break;
                 }
       case 2:
                 {
                  cout<<"Pole prostopadloscianu: "<<pp(a,b,c)<<endl;
                  break;}
       case 3:  {
                cout<<"Pole trojkata: "<<pt(a,h)<<endl;
                break;}

default: {cout<<"Nie ma takiej cyfry"<<endl;} 
}                      
system("pause");
}
