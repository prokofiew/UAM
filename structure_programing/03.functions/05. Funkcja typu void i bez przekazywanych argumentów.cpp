#include<iostream>
#include<cstdio>
using namespace std;

void srednia_aryt (void) //funkcja typu void (nie zwraca wartoœci) i bez przekazywanych argumentów. równie dobrze nawias moze byc pusty

// argumenty zawarte w klamrze a nie w nawiasie
{
	float a,b;
	cout<<"Podaj 2 liczby, z ktorych mam policzyc srednia: "<<endl;
	cin>>a>>b;
	cout<<"Srednia arytmetyczna tych liczb = ";
	cout<<(a+b)/2;
}

int main()
{
srednia_aryt(); // wywo³anie funkcji bez argumentów (uwaga, nie ma cout przed)
cout<<endl;
system("pause");
return 0;
}
