#include<iostream>
#include<cstdio>
using namespace std;

double silnia (int n)
{
	if (n==0)
		return 1; // warunek pocz¹tkowy rekurencji	
	else
		return silnia(n-1)*n; // wywolanie rekurencyjne funkcji, wywo³anie funkcji w funkcji
}

int main()
{
	int n;
	
	cout<<"Podaj wartosc, z ktorej chcesz obliczyc silnie"<,endl;
	cin>>n;
	cout<<"silnia z podanej liczby wynosi: " <<silnia(n);
	
	cout<<endl;
	system("pause");
	return 0;
}
