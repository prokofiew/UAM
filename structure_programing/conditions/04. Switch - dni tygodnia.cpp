#include<iostream>
#insclude<cstdio>
using namespace std;

int main()
{
	int nr_dnia_tygodnia; // zadeklarowana zmienna 
	cout << "Podan nr dnia tygodnia: ";
	cin >> nr_dnia_tygodnia;
	
	switch(nr_dnia_tygodnia)
{ // zawsze instrukcje w klamrze
// je�eli case dotyczy liczby to bez apostrofu, pojedynczy znak taki jak litera musi by� uj�ta w apostrofie ''
	case 1: cout << "Dzi� jest poniedzia�ek"; break; // przerywa p�tl� case i nie pozwala przej�� do kolejnej instrukcji case
	case 2: cout << "Dzi� jest wtorek"; break;
	case 3: cout << "Dzi� jest �roda"; break;
	case 4: cout << "Dzi� jest czwartek" break;
	case 5: cout << "Dzi� jest pi�tek" break;
	case 6: cout << "Dzi� jest sobota" break;
	case 7: cout << "Dzis jest niedziela"; break;
	default: cout << "Nie ma takiego dnia tygodnia"; break; // default - nie ma takiego przypadku, post�powanie w przypadku nieokre�lonym w case
}
cin.ignore();
getchar();
return 0;
}
