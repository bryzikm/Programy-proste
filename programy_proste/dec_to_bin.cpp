/*
program ktory zamienia podana liczbe na liczbe w systemie 01
*/

#include <iostream>

using namespace std;
int main () {
int a;
int tab[10];

cout<<"podaj wartosc a"<<endl;
cin>>a;
int i=0;
do{ tab[i]=a%2;
a=a/2;
i++;
}while(a!=0);
for ( int j=i-1;
j>=0;
j--)

cout <<tab[j];


system("pause");
}
