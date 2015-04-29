/*
NWD metoda iteracyjna
*/
#include<iostream.h>
int NWD(int a, int b);
int main()
{
 int a, b;
  int nwd;
  cout<<"podaj 1 liczbe"<<endl;
  cin>>a;
  cout<<"podaj 2 liczbe:"<<endl;
  cin>>b;
   nwd=NWD(a,b);
   cout<<"\nnajwiekszy wspolny dzielnik 2 licb wynosi :  "<<nwd<<endl; 
    
system("pause");
}
int NWD(int a, int b)
{
    int c=a;//zmienne pomocnicze
    int d=b;//zmienne pomocnicze
    while(c!=d)
    {
    if(c>d)
           c=c-d;
    else 
         d=d-c;
    }
    return c;
}
