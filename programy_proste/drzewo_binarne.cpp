/*

Drzewo binarne uzupe³niane poziomami 

uzupelniajac jego kolejne poziomy...
 */

#include <iostream>

   // struktura do przechowywania elementow drzewa
struct node
{ int v;      // wartosc
  node* l;    // wskaznik na lewo
  node* r;    // wskaznik na prawo
};

  /* struktura do zapamietania miejsca dodania ostatniego elementu
   * level: sam korzen                        -    level=-1
   *        korzen i lisc                     -    level=0
   *        korzen i dodatkowe trzy elementy  -    level=1    itd..
   * trasa: przechowuje trase do ostatnio dodanego elementu
   *        w postaci tablicy zer i jedynek
   *        0 - przejscie na lewa strone; 1 - na prawa
   * PRZYKLAD: level=3  trasa={0,1,0}
   * drzewo ma trzy poziomy + korzen;
   * zeby przejsc do ostatnio dodanego elementu trzeba przejsc drzewo
   * rozpoczynajac od korzenia w lewo, dalej w prawo i lewo
   */
struct bittab
{ int level;
  int *trasa;
};
  // obiekt globalny przechowujacy trase
bittab trs;

  // pobiera wartosc, tworzy obiekt i go zwraca
node* getNew()
{
	int v;
	cout << "New value = ";
	cin >> v;
	if (!v) return NULL;
	node* w =new node;
	w->v = v;
	w->r = w->l = NULL;
	return w;
}

  // wypisuje wartosci z wczesniej tworzonego drzewa
void printTree(node* n)
{	if (!n) return;
	printTree(n->l);
	cout << n->v << ", ";
	printTree(n->r);
}

  // oblicza miejsce, w ktore ma byc dodany nowy element
void dodaj(bittab& trs)
{int i,wyndziel; 
  
  if(trs.level==-1)
  { trs.level=0;
    trs.trasa=new int[trs.level+1];
    for(i=0;i<=trs.level;i++)
      trs.trasa[i]=0;
    return;
  }

  wyndziel=1;
  for(i=trs.level;i>=0;i--)
  { trs.trasa[i]+=wyndziel;
    wyndziel=trs.trasa[i]/2;
    trs.trasa[i]=trs.trasa[i]%2;
  }
  if(wyndziel==1)
  { trs.level++;
    delete [] trs.trasa;
    trs.trasa=new int[trs.level+1];
    for(i=0;i<=trs.level;i++)
      trs.trasa[i]=0;    
  }
}

  // dodaje element do drzewa
void insert(node* r,node* w,bittab& trs)
{int i;
 
  dodaj(trs);
  for(i=0;i<trs.level;i++)
    if(trs.trasa[i]==0)
      r=r->l;
    else
      r=r->r;

  if(trs.trasa[trs.level]==0)
    r->l=w;
  else
    r->r=w;
}

  // zwalnia zarezerwowana pamiec
void del_tree(node *root)
{ if(!root)
    return;
  del_tree(root->l);
  del_tree(root->r);
  delete root;
}



int main()
{ 
  trs.level=-1;
  trs.trasa=NULL;

	node* root = NULL; // root of the tree
	node* w; // watcher

	// main loop
	while (w=getNew())
	{
		if (!root)
			root = w;
		else
			insert(root,w,trs);
	}
	cout << "The elements of the tree:" << endl;
	printTree(root);
	cout << endl;

	del_tree(root);
        delete [] trs.trasa;
	return 0;
}


