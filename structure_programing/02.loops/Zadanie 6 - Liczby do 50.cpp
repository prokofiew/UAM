#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
float liczba, liczba2;
float suma=0;
cout<<"Podaj liczbe: ";
cin>>liczba;
suma=suma+liczba;
do 
{
	cout<<"Podaj kolejna liczbe: ";
	cin>>liczba2;
	suma=suma+liczba2;
	cout<<"Suma podanych liczb to: "<<suma<<endl;
}
while (suma<=50);
cout<<"Suma podanych liczba przekroczyla 50. Suma to: ";cout<<suma;
cin.ignore();
getchar();
return 0;
}

