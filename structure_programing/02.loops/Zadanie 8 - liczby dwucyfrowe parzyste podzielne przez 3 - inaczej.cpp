#include<iostream>
#include<cstdio>
using namespace std;

//TEN PROGRAM WYPISUJE WSZYSTKI DWUCYFROWE LICZBY PARZYSTE PODZIELNE PRZEZ 3

int main()
{
for (int i=10; i<=100; i=i+2)
{
	if (i%3==0)
	cout<<i<<", ";
}
cin.ignore();
getchar();
return 0;
}
