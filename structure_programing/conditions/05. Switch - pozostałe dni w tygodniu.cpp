#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
int nr_dnia_tygodnia;
cout<< "Który mamy dzis nr dnia tygodnia? ";
cin>>nr_dnia_tygodnia;
cout<<"Przed Toba nastepujace dni w tym tygodniu: ";

switch(nr_dnia_tygodnia)	
{
	case 1: cout<<"poniedzialek"<<endl; // brak instrukcji break powoduje, ¿e bêd¹ wypisane wszystkie dni tygodnia które pozosta³y
	case 2: cout<<"wtorek"<<endl;
	case 3: cout<<"Sroda"<<endl;
	case 4: cout<<"Czwartek"<<endl;
	case 5: cout<<"Piatek"<<endl;
	case 6: cout<<"Sobota"<<endl;
	case 7: cout<<"Niedziela"<<endl;
} 
cin.ignore();
getchar();
return 0;o
}
