#include<iostream>
#include<cstdio>
using namespace std;

// PROGRAM OBLICZAJĄCY POLE KWADRATU O PODANEJ DŁUGOŚCI BOKU

// W przypadku podania przez użytkownika niewłaściwej wartości 
// (0 lub liczba ujemna), program powinien prosić o podanie właściwej liczby

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
