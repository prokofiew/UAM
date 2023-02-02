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
// je¿eli case dotyczy liczby to bez apostrofu, pojedynczy znak taki jak litera musi byæ ujêta w apostrofie ''
	case 1: cout << "Dziœ jest poniedzia³ek"; break; // przerywa pêtlê case i nie pozwala przejœæ do kolejnej instrukcji case
	case 2: cout << "Dziœ jest wtorek"; break;
	case 3: cout << "Dziœ jest œroda"; break;
	case 4: cout << "Dziœ jest czwartek" break;
	case 5: cout << "Dziœ jest pi¹tek" break;
	case 6: cout << "Dziœ jest sobota" break;
	case 7: cout << "Dzis jest niedziela"; break;
	default: cout << "Nie ma takiego dnia tygodnia"; break; // default - nie ma takiego przypadku, postêpowanie w przypadku nieokreœlonym w case
}
cin.ignore();
getchar();
return 0;
}
