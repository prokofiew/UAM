#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
int n;										//przypisanie zmiennej n liczby całkowitej
cout<<"Podaj do ilu mam policzyc"<<endl;	// pytanie o pworawdzenie liczby do zmiennej
cin>>n;									// wprowadzenie liczby do zmiennej
for (int i=1; i<=n; i++)					// i++ inkrumentacja - zwiększenie zmiennej o 1
{
	cout<<i<<", ";
}
cin.ignore();
getchar();
return 0;
}
