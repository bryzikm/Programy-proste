/*2. Napisz funkcj� RӯNICA wyznaczaj�c� r�nic� dw�ch zadanych liczb ca�kowitych. 
Dzia�anie funkcji sprawd� pisz�c odpowiedni program.*/

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
