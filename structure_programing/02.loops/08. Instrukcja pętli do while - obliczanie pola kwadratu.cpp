#include<iostream>
#include<cstdio>
using namespace std;

// PROGRAM OBLICZAJ¥CY POLE KWADRATU O PODANEJ D£UGOŒCI BOKU

// W przypadku podania przez u¿ytkownika niew³aœciwej wartoœci 
// (0 lub liczba ujemna), program powinien prosiæ o podanie w³aœciwej liczby

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
