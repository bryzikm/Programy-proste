#include<iostream>

using namespace std;



int main()

{

int a=10,b=3,c;

float fa=10,fb=3;



    cout<<"Program demonstuje dzialanie niektorych operatorow C++"<<endl;


    cout<<"Operatory: + - * / dzialaja standardowo, ale..."<<endl<<endl;


    cout<<"a+b="<<a+b<<" \tfa+fb="<<fa+fb<<endl;

    cout<<"a-b="<<a-b<<" \tfa-fb="<<fa-fb<<endl;

    cout<<"a*b="<<a*b<<" \tfa*fb="<<fa*fb<<endl;

    cout<<"a/b="<<a/b<<" \tfa/fb="<<fa/fb<<endl;

    cout<<endl;



    cout<<"Operator \"reszta z dzielenia\" - modulo - %"<<endl;


    cout<<"a%b="<<a%b<<endl<<endl;


    
    cout<<"Operator inkrementacji ++ oraz dekrementacji --:"<<endl<<endl;


    cout<<"Wartosci zmiennych przed wykonaniem instrukcji: a="<<a<<" b="<<b<<endl;

    cout<<"Na a i b podzialamy operatorem ++ w dwoch \"wersjach\" :"<<endl;

    cout<<"\ta++ daje wartosc "<<a++<<"\n\t++b daje wartosc "<<++b<<endl;

    cout<<"Wartosci zmiennych po wykonaniu instrukcji: a="<<a<<" b="<<b<<endl<<endl;


    cout<<"Operator sizeof podaje, ile (bajtow) pamieci potrzeba "

	"na zmienna danego typu"<<endl;


    cout<<"sizeof(int) ma wartosc "<<sizeof(int)<<endl;

    
    cout<<"sizeof(float) ma wartosc "<<sizeof(float)<<endl;


    cout<<"sizeof(double) ma wartosc "<<sizeof(double)<<endl;

}
