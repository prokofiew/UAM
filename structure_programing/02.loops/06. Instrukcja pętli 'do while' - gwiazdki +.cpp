#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
int i=0;
do				// wykonaj komend�
{				
	cout<<'*';	// komenda
	i++;
}
while (i<4);	// do momentu gry warunek w nawiasie jest spe�niony
cin.ignore();	// p�tla PRZYNAJMNIEJ RAZ si� wykon
getchar();		//BO WARUNEK JEST SPRAWDZANY NA KO�CU
return 0;
}
