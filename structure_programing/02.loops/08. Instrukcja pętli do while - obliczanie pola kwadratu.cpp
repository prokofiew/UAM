#include<iostream>
#include<cstdio>
using namespace std;

// PROGRAM OBLICZAJ�CY POLE KWADRATU O PODANEJ D�UGO�CI BOKU

// W przypadku podania przez u�ytkownika niew�a�ciwej warto�ci 
// (0 lub liczba ujemna), program powinien prosi� o podanie w�a�ciwej liczby

int main()
{
float bok;
do
{
	cout<<"Podaj dodatnia dlugosc boku: ";
	cin>>bok;
	if (bok<=0)
	cout<<"Niepoprawna dlugosc boku - podaj liczbe jeszcze raz!: ";
}
while(bok<=0);
cout<<"Pole kwadratu wynosi: " <<bok*bok;
cin.ignore();
getchar();
return 0;
}
