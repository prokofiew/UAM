#include<iostream>
#include<cstdio>
using namespace std;

void zmien (int a)
{
	a=a+3; // zmienna w funkcji, w funkcji bêdzie ona mia³a wartoœc zmienion¹ - czyli 6. 
	cout<<"Wewnatz funkcji zmienna ma wartosc; "<<a<<endl;
}

int main()
{
int a=3; // zmienna w programie g³ównym, mimo wykonania fukcji wartoœæ a to wci¹¿ 3. wartoœc 6 tylko w funkcji
cout<<"Przed wywolaniem funkcji zmienna ma wartosc; "<<a<<endl;
zmien(a);
cout<<"Po wyjsciu z funkcji zmienna ma wartosc: "<<a;

cout<<endl;
system("pause");
return 0;
}
