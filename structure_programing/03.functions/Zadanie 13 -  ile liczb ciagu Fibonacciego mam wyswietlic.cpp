#include<iostream>
#include<cstdio>
using namespace std;

int fib (int n)
{
	int fib1 = 0;
	int fib2 = 1;
	int i;
	int wynik;
	if (n<2)
		return n;
	else 
		for (int i=2; i<=n; i++)
		wynik = (n-1)+(n-2);
	return wynik;
	
	
		
	
}

int main()
{
int n;
cout<<"Ile liczb ciagu Fibonacceigo mam wyswietlic?"<<endl;
cin>>n;
cout<<fib(n);
cout<<endl;
system("pasue");
return 0;
}