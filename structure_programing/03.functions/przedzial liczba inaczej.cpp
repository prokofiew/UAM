#include<iostream>
#include<cstdio>
using namespace std;

void suma_z_przedzialu (double a, double b)
{
	double suma=0; // suma musi sie na poczatku rownac 0. By pętla for mogła się rozpocząć. Skoro i+a to suma = a. W tej sposob będzie można rozpocząc i zakończyć pętlę.
		
	for (double i=a; i<=b; i++)
	{
		do
		{
			cout<<"Podaj liczbe a: "<<endl;
			cin>>a;
			cout<<"Podaj liczbe b: "<<endl;
			cin>>b;
				if (a=b)
				{
					cout<<"Podane wartosci nie moga byc rowne !!"<<endl;
				}
				else if (a>b)
				{	
					double temp;
					temp = a;
					a = b;
					b = temp;	
				}
			
		}
		while (a=b) and (a>b);
			cout<<suma = suma + i;
	}
	
		
	cout<<"Suma liczb z przedzialu <"<<a<<","<<b<<"> wynosi: "<<endl;
	cout<<endl;
}

int main()
{
double a,b;
cout<<"Ten program wylicza sume liczb z podanego przez Ciebie przedzialu liczb "<<endl;
suma_z_przedzialu(a,b);
cout<<endl;
system("pause");
return 0;
}