#include<iostream>
#include<cstdio>
using namespace std;


void srednia_aryt (float a, float b) // funkcja typu void - nie zwraca warto�ci, nie ma w niej return, ona wy�wietla warto�c np. poprzez cout
{
	cout<<(a+b)/2;
}

int main()

{
float x,y;
cout<<"Podaj 2 liczby, z ktorych mam policzyc srednia; "<<endl;
cin>>x>>y;
cout<<"Srednia arytmetyczna tych liczb = ";
srednia_aryt(x,y); //wywo�anie funkcji z przekazywanymi parametrami jako zmienne
					// (uwaga nie ma cout przed wywolaniem funkcji) to tez efekt funkcji void
cout<<endl;
system("pause");
return 0;
}
