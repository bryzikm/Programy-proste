/*
wyswietla napis: " t o j e s t n a p i s"
zamienia ma³e litery na du¿e
*/

#include <stdio.h>
#include<conio.h>
#include <ctype.h>   //toupper -zamienia ma³elitery na du¿e
                     //tolower - zamienia du¿e litery na ma³e      

int main() {
int i=0, j=0;
char t1[]="to jest napis";
char t2[50];
char c = t1[i++];



while(t1[i]){

t2[j++]=toupper(t1[i++]);
t2[j++]=' ';


if (c>='a' && c<='z') c += ('A' - 'a');
}

t2[--j]='\0';
printf("Wpisanie calego lancuchu: \n%s\n\n", t2);
j=0;
while(t2[j])
printf("%c", t2[j++]);
getch();
}
