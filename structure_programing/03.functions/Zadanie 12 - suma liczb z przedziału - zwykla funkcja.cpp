#include<iostream>
#include<cstdio>
using namespace std;

suma_z_przedzialu (double a, double b)
{
	double suma=0; // suma musi sie na poczatku rownac 0. By pętla for mogła się rozpocząć. Skoro i+a to suma = a. W tej sposob będzie można rozpocząc i zakończyć pętlę.
	if (a>b)
	{
		double temp;
		temp = a;
		a = b;
		b = temp;	
	}
	
	for (double i=a; i<=b; i++)
		suma = suma + i;
	cout<<"Suma liczb z przedzialu <"<<a<<","<<b<<"> wynosi: "<<endl;
	return suma;
	cout<<endl;
}

int main()
{
double a,b;
cout<<"Ten program wylicza sume liczb z podanego przez Ciebie przedzialu liczb "<<endl;
cout<<"Podaj liczbe a: "<<endl;
cin>>a;
cout<<"Podaj liczbe b: "<<endl;
cin>>b;
cout<<suma_z_przedzialu(a,b);
cout<<endl;
system("pause");
return 0;
}