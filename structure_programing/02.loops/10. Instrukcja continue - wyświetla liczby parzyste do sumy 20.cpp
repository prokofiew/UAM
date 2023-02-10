#include<iostream>
#include<cstdio>
using namespace std;

// PROGRAM WY�WIETLA LICZBY PARZYSTE, DOP�KI ICH SUMA NIE PRZEKROCZY 20.

int main()
{
	
for (int i=0; i<7; i++)
{
	cout<<endl<<i<<", ";
	if (i%3==0)
		continue;				// je�li warunek zostanie spe�niony, nast�puje prze�cie do ko�ca przebiegu p�tli
	cout<<" - nie jest podzielne przez 3";
}
	
cin.ignore();
getchar();
return 0;
}
