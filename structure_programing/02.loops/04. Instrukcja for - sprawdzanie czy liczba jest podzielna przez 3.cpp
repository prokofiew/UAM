#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
for (int i=0; i<=20; i++)
{
	cout<<i;
	if (i%3!=0) 		// je�li reszta z dzielenia przez 3 jest r�na od 0
		cout<<" - nie jest podzielne przez 3";
	cout<<endl;
}
cin.ignore();
getchar();
return 0;
}

