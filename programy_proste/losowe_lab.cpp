#include<iostream>
#include<fstream>
#include<time.h>
using namespace std;

int main()
{
ofstream plik("losowe.txt");

srand( time (NULL));

for(int i=0; i<1000; i++)
	{
		plik<<rand()%5000+1<<" ";
	}
	
	cin.get();
	cin.get();
	return 0;
}