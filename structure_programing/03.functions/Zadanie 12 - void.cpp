#include<iostream>
#include<cstdio>
using namespace std;

void suma()
{
	double x, y, i, suma;
	suma = i;
	if (x<y)
	{
		for (double i=x; i<=y; i=x+i);
		cout<<suma = suma + 1;
	}
	else if (x>y)
	{
		for (double i=y; i<=x; i=y+1);
		cout<<suma;
	}
	else 
		cout<<"Nie moge wykonac zadania";
	
	
}

int main()
{
double a,b;
cout<<"Ten program wylicza sume liczb z podanego przez Ciebie zakresu "<<endl;
cout<<"Podaj liczbe a: "<<endl;
cin>>a;
cout<<"Podaj liczbe b: "<<endl;
cin>>b;
suma();
system("pause");
return 0;
}