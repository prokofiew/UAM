#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
	int liczba;
	cout << "Podaj liczbe ";
	cin >> liczba;
	
	if (liczba>=0) //instrukcja warunkowa, sprawdzenie warunku
		cout << "Podana liczba jest dodatnia"; // wykonanie instrukcji je�li warunek jest spe�niony
	else cout << "Podana liczba jest ujemna"; // wykonanie instrukcji je�li warunek powy�ej nie jest spe�niony
	cin.ignore();
	getchar();
	return 0;
}
