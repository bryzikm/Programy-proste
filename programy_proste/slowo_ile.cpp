/*

Kolejka przetrzymuj¹ca wszystkie wyrazy znajduj¹ce siê w pliku i zliczaj¹ca iloœæ wyst¹pieñ danego s³owa 

*/
#include <fstream>
#include <string>
#include <iostream>
using namespace std;

struct node
{ string slowo;
  int ilosc;
  node *prev;
  node *next;
};

     // buduje nowy element kolejki
node * zbuduj(string slowo)
{ node *wynik=new node;
  wynik->slowo=slowo;
  wynik->ilosc=1;
  wynik->prev=NULL;
  wynik->next=NULL;
  return wynik;
}

    // jezeli znajdzie w kolejce element zawierajacy "slowo" zwieksza 
    //       licznik "ilosc" w tym elemencie i zwraca 1,
    // w przeciwnym razie zwraca 0
int znajdz_dodaj(node *head,string slowo)
{ while(head)
  { if(head->slowo == slowo)
    { head->ilosc++;
      return 1;
    } 
    head=head->next;
  }
  return 0;
}

     // dodaje element na poczatek kolejki
void dodaj(node *&head,node *elem)
{ head->prev=elem;
  elem->next=head;
  head=elem;
}

     // oddaje zarezerwowana pamiec
void usun(node *head)
{ if(!head)
    return;
  usun(head->next);
  delete head;
}


int main()
{ string nazwaPliku,slowo;
  fstream fstr;
  node *tmp,*head=NULL;

  cout<<"Podaj nazwe pliku do odczytu: ";
  cin>>nazwaPliku;
  fstr.open(nazwaPliku.c_str(),ios::in);
  if(fstr.fail())
  { cerr<<"Nie mozna otworzyc pliku do odczytu!"<<endl;
    return 1;
  }

  fstr>>slowo;
  while(!fstr.eof())
  { if(!head)
      head=zbuduj(slowo);
    else
      if(!znajdz_dodaj(head,slowo))
        dodaj(head,zbuduj(slowo));
    fstr>>slowo;
  }

  fstr.close();

  fstr.open("wynik.txt",ios::out);
  if(fstr.fail())
  { tmp=head;
    while(tmp)
    { cout<<tmp->ilosc<<" "<<tmp->slowo<<endl;
      tmp=tmp->next;
    }
  }
  else  
  { tmp=head;
    while(tmp)
    { fstr<<tmp->ilosc<<" "<<tmp->slowo<<endl;
      tmp=tmp->next;
    }
    fstr.close();
  }

  usun(head);
  return 0;
}

