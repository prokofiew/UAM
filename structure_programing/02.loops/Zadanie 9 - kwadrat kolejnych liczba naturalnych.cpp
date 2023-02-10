#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
int k;
cout<<"Podaj liczbe do ktorej mam wymieniac liczby: ";
cin>>k;

for (int i=0; i<=k; i++)
{
	cout<<i*i<<", ";
}
cin.ignore();
getchar();
return 0;
}
