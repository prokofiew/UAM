#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
	int liczba;
	cout << "Podaj liczbe ";
	cin >> liczba;
	
	if (liczba>=0) //instrukcja warunkowa, sprawdzenie warunku
		cout << "Podana liczba jest dodatnia"; // wykonanie instrukcji jeœli warunek jest spe³niony
	else cout << "Podana liczba jest ujemna"; // wykonanie instrukcji jeœli warunek powy¿ej nie jest spe³niony
	cin.ignore();
	getchar();
	return 0;
}
