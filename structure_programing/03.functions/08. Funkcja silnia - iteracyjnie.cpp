#include<iostream>
#include<cstdio>
using namespace std;

double silnia_iteracyjnie (int a)
{
	double silnia=1;
	for (double i=2; i<n+1; i++)
		silnia=silnia*i;
	return silnia;
}

int main()
{
	int n;
	
	cout<<"Podaj wartosc, z ktorej chcesz pnliczyc silnie"<<endl;
	cin>>n;
	cout<<"Silnia z podanej liczby wynosi: " <<silnia_iteracyjnie(n);
	
	cout<<endl;
	system("pause");
	return 0;	
}
