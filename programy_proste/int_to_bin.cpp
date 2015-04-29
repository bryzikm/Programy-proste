#include<iostream>

using namespace std;



int binarnie(unsigned long);



int main()

{

unsigned long wartosc;


    cout<<"Program wypisuje binarna postac liczby"<<endl;


    cout<<"Podaj liczbe :";

    cin>>wartosc;


    cout<<"Wartosc zapisana binarnie :";

    binarnie(wartosc);
    cout<<endl;

}


int binarnie(unsigned long liczba)

{

    if(liczba>=2)
	 binarnie(liczba/2);

    cout<< liczba % 2;

}
