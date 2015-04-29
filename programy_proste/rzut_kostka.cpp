/*
program symuluj¹cy rzut kostk¹ 20 razy: 
*/
#include <iostream>
#include<conio.h>
#include <cstdlib> //RAND_MAX 

using namespace std;

int main()
{
	for(int i=1; i<20; i++)
		cout<<(rand()%6+1)<<'\n';

	cout<<endl;

	getch();
}
