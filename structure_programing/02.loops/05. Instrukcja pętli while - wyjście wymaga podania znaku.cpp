#include<iostream>
#include<cstdio>
using namespace std;

// PROGRAM PROSI O PODANIE ZNAKU, DOPÓKI U¯YTKOWNIK NIE PODA "K"

int main()					
{
char znak;
cout<<"Podaj znak: ";
cin>>znak;
while (znak!='k')				// je¿eli podany znak jest ró¿ny od wymaganego pêtla wymaga podanie kolejny raz
{
	cout<<"Podaj kolejny znak ";
	cin>>znak;
}
cout<< "Podales/as "<<znak<< " wiec koncze";
cin.ignore();
getchar();
return 0;
}
