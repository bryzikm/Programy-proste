
/*
Program oblicza iloœciowo i procentowo wystêpowanie samog³osek we wprowadzonym tekœcie 
*/
#include<conio.h>
#include<iostream.h>

main()
{
 char ch;
 int la=0,le=0,li=0,lo=0,lu=0,ly=0,caly=0;
 float pa,pe,pi,po,pu,py;

 clrscr();

 cout<<"Podaj ci¥g znak¢w (zakonczony Ctrl+D)"<<endl;
 while ((ch = getch())!=4)   //4 bo kod (Ctrl+D) ma wartosc 4 a nie 0
 {
  cout<<ch;
  caly++;
  if (ch=='a') la++;
  if (ch=='e') le++;
  if (ch=='i') li++;
  if (ch=='o') lo++;
  if (ch=='u') lu++;
  if (ch=='y') ly++;

 }
 pa=(la*100)/caly;
 pe=(le*100)/caly;
 pi=(li*100)/caly;
 po=(lo*100)/caly;
 pu=(lu*100)/caly;
 py=(ly*100)/caly;

 cout<<endl<<"Ilosc wszystkich liter: "<<caly<<endl;
 cout<<"Ilosc samogloski a: "<<la<<" tj. "<<pa<<"%"<<endl;
 cout<<"Ilosc samogloski e: "<<le<<" tj. "<<pe<<"%"<<endl;
 cout<<"Ilosc samogloski i: "<<li<<" tj. "<<pi<<"%"<<endl;
 cout<<"Ilosc samogloski o: "<<lo<<" tj. "<<po<<"%"<<endl;
 cout<<"Ilosc samogloski u: "<<lu<<" tj. "<<pu<<"%"<<endl;
 cout<<"Ilosc samogloski y: "<<ly<<" tj. "<<py<<"%"<<endl;

 getch();
 return 0;
}
