#include<iostream>
#include<cstdio>
using namespace std;

// rozwiazanie to nie jest raczej stosowane, lepiej miec zmienne lokalne dla kazdej funkcji/program

float a,b // zmienne globalne znane w funkcji i w programie g³ównym

float srednia_aryt (float a, float b)
{
	return (a+b)/2;
}

int main()
{
	
cout<<"Podaj 2 liczby, z których ma policzyc srednia: "<<endl;
cin>>a>>b;
cout<<"Srednia arytmetyczna tych liczb = ";
cout<<srednia_aryt(a,b); //wywo³anie funkcji z przekazywanymi parametrami jako zmienne
cout<<endl;
system("pause");
return 0;
}
