#include<iostream>
#include<cstdio>
using namespace std;

// ALGORYTM DZIELENIA CA�KOWITEGO ZREALIZOWANY PRZY POMOCY P�TLI WHILE
/* 			PRZYK�AD
			23 ORAZ 5
			
FUNKCJA SPRAWDZA ILE RAZY 5 MIE�CI SI� W 23.
ODEJMUJE OD 23 LICZBE 5. WYNIK ODPOWIEDNIO TO 18, 13, 8, 3. 
GDY A WYNOSI 3, PRZESTAJE BYC SPE�NIONY WARUNEK P�TLI a>=b WIEC PETLA ZOSTAJE PRZERWANA.
PONIEWA� P�TLA ZOSTAJE URUCHOMIONA 4 RAZY WIEC ZMIENNA K PRZYJMUJE WARTO�� CZTERY.
ZMIENNA K STAJE SIE WYNIKIEM DZIELENIA

*/
int main()
{
int a,b;
int k=0;
cout<<"Podaj dziela: ";
cin>>a;
cout<<"Podaj dzielnik: ";
cin>>b;
if (b==0)
	cout<<"Nie wolno dzielic przez 0!";
else
{											// klamra dla instrukcji else
	while (a>=b)
	{
		a=a-b;
		k++;								// klamra dla instrukcji while
	}
	cout<<"a/b wynosi; "<<k;
}
cin.ignore();
getchar();
return 0;
}
