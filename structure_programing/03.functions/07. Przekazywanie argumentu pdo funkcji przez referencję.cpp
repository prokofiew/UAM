#include<iostream>
#include<cstdio>
using namespace std;

void zmien (int &a ) // przekazywanie argumentu przez referencje (tylko tu jest zmiana!)
					// funkcja modyfikuje warto�� zmiennej a, teraz b�dzoe ona mia�a warto�c 6
{ 
	a=a+3;
	cout<<"wewnatrz funkcji zmienna ma wartosc: "<<a<<endl;
}

int main()
{
int a=3;
cout<<"przed wywolaniem funkcji zmienna ma wartosc: "<<a<<endl;
zmien(a);
cout<<"Po wyjsciu z funkcji zmienna ma wartosc: "<<a;
// powyj�ciu z funkcji zn�w odwo�ujemysie do zmiennej a; teraz ma ona warto�c 6.
cout<<endl;
system("pause");
return 0;
}
