/*2. Napisz funkcjê RÓ¯NICA wyznaczaj¹c¹ ró¿nicê dwóch zadanych liczb ca³kowitych. 
Dzia³anie funkcji sprawdŸ pisz¹c odpowiedni program.*/

#include<iostream.h>

int Roznica(int a, int b)
{
int roznica;    
    
cout<<"Podaj a"<<endl;    
cin>>a;
cout<<"Podaj b"<<endl;    
cin>>b;
roznica=a-b;
return roznica;}
//koniec funkcji    
int main()
{
int a, b;
    
cout<<"Roznica: "<<Roznica(a,b)<<endl;   
    
    
    
    
    
    
    
    
system("pause");    
}
