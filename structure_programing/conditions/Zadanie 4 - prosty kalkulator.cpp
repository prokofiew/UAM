#include<iostream>
#include<cstdio>
using namespace std;

int main()

{

long int a, b;
cout<<"PROSTY KALKULATOR"<<endl;
cout<<"Podaj liczbe a = ";
cin>>a;
cout<<"Podaj liczbê b = ";
cin>>b;

char dzialanie;
cout<<"Jakie dzialanie chcesz wykonac:"<<endl;
cout<<"Dodawanie [+], odejmowanie [-], mnozenie [*], czy dzielenie [/] ?"<<endl;
cin>>dzialanie;

switch(dzialanie)
{
	case '+': cout<<"Twoj wynik to: "<<(a+b); break;
	case '-': cout<<"Twoj wynik to: "<<(a-b); break;
	case '*': cout<<"Twoj wynik to: "<<(a*b); break;
	case '/': 
		if (b==0)
			cout<< "Podaj inna wartosc b lub wybierz inne dzialanie. (Nie mozna dzielic przez 0)";
		else
			cout<<"Twoj wynik to: "<<(a/b);	
}
cin.ignore();
getchar();
return 0;
}
