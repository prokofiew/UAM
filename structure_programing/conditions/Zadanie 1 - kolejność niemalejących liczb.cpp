#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
	// wprowadzanie liczb do zmiennych a,b,c
int a, b, c; 
cout << "Podaj liczbe a: ";
cin >> a;
cout << "Podaje liczbê b: ";
cin >> b;
cout << "Podaj liczbê c: ";
cin >> c;

// warunki
if (a<=b) // prawa strona schematu
	if (b<=c)
		cout << "Tak ulozylem podane przez Ciebie liczby: " << 'a' << 'b' << 'c';
	else
		if (c<=a)
			cout << "Tak ulozylem podane przez Ciebie liczby: " << 'c' << 'a' << 'b';
		else cout << "Tak ulozylem podane przez Ciebie liczby: " <<'a' << 'c' << 'b';
else // lewa strona schematu
	if (b<=c)
		if (c<=a)
			cout << "Tak ulozylem podane przez Ciebie liczby: " << 'b' << 'c' << 'a';
		else cout << "Tak ulozylem podane przez Ciebie liczby: " << 'b' << 'a' << 'c';
	else cout << "Tak ulozylem podane przez Ciebie liczby: " << 'c' << 'b' << 'a';

cin.ignore();
getchar();
return 0;
								
}
