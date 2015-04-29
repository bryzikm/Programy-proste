/*
Napisz program wczytuj¹cy 4 liczby ca³kowite i sprawdzaj¹cy
ile jest wœród nich powtórzeñ (dwójek, trójek lub czwórek).
- nie mam pomys³u na instrukcje porównuj¹ce
*/


int main(int argc, char *argv[])

{ 
int a,ilosc2,ilosc3,ilosc4; 
ilosc2=0;
ilosc3=0;
ilosc4=0;
cout<<"Podaj ile liczb chcesz wczytac: ";
cin>>a;
int tliczby[a]; 

for(int i=1; i<=a; i++)
{
cout<<"Podaj liczbe nr "<<i<<" -->"; 
cin>>tliczby[i];
if (tliczby[i]==2)
ilosc2=ilosc2+1;
if (tliczby[i]==3)
ilosc3=ilosc3+1;
if (tliczby[i]==4)
ilosc4=ilosc4+1;
}
cout<<"powtorzen 2: "<<ilosc2;
cout<<"powtorzen 3: "<<ilosc3;
cout<<"powtorzen 4: "<<ilosc4;

system("PAUSE");
return EXIT_SUCCESS;
}


