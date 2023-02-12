#include<iostream>
#include<cstdio>
using namespace std;

void objetnosc()
{
	float a;
	do					// wprowadzanie wartości do zmiennych oraz warunek w razie niepoprawnych wartości
	{
		cout<<"Podaj dlugosc boku szescianu."<<endl;
		cin>>a;
		if (a<=0)
			cout<<"Podana dlugosc boku musi byc liczba dodatnia!"<<endl;
	
	}
	
	while (a<=0);			// wchodź w pętlę dopoki warunek jest TRUE czyli a<=0. Wychodzi z pętli gdy jest FALSE
		cout<<"Objetosc szescianu o boku " <<a<< " wynosi: "<<endl;
		cout<<a*a*a;
		
}

int main()
{
objetnosc();  // wywołanie funkcji - nie wymaga cout - argumenty nie podawane w nawiasie
cout<<endl;
system("pause");
return 0;
}
