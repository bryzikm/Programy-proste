#include<iostream.h>

int main()
{
    int nip[10],wagi[9]={6,5,7,2,3,4,5,6,7};
    int i;
    int suma=0;
    
    for(i=0;i<10;i++)
    {
    do
    {
    cout<<"podaj "<<i+1<<" cyfre NIP: "<<endl;
cin>>nip[i];
}
while((nip[i]<0)||(nip[i]>9));
}
//sumowanie
for(i=0;i<=8;i++)
{
suma=suma+(nip[i]*wagi[i]);
}
cout<<"suma wynosi: "<<suma<<endl;
//dzielenie sumy przez 11
int mod;
mod=suma%11;
if(mod==10)
{
mod=0;
}
cout<<"mod wynosi "<<mod<<endl;
//sprawdzenie poprawnosci
if(mod==nip[9])
{
cout<<"NIP poprawny"<<endl;
}
else
{
cout<<"NIP niepoprawny"<<endl;
}

//Olkusz lub Kraków-Krowod¿a
if((nip[0]==2)&&(nip[1]==2)&&(nip[2]==3))
{
cout<<"NIP dla urzêdu skarbowego w olkuszu"<<endl;
}
if((nip[0]==2)&&(nip[1]==5)&&(nip[2]==7))
{
cout<<"NIP dla urzedu skarbowego w krakowie-krowodrzy"<<endl;
                

}
system("pause");
}
