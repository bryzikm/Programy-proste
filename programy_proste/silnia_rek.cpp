#include<iostream>

using namespace std;



unsigned long silnia(unsigned long);



int main()

{

unsigned long argument;



    cout<<"Program wylicza silnie z liczby algorytmem rekurencyjnym"<<endl;


    cout<<"Podaj liczbe: ";

    cin>>argument;

    cout<<"Silnia z liczby "<<argument<<" wynosi "<< silnia(argument) <<endl;

} 


unsigned long silnia(unsigned long liczba)

{

    if(liczba==0) return 1;

    else

    return liczba * silnia(liczba-1);

}
