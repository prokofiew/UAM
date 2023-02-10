#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
int i=0;
do				// wykonaj komendê
{				
	cout<<'*';	// komenda
	i++;
}
while (i<4);	// do momentu gry warunek w nawiasie jest spe³niony
cin.ignore();	// pêtla PRZYNAJMNIEJ RAZ siê wykon
getchar();		//BO WARUNEK JEST SPRAWDZANY NA KOÑCU
return 0;
}
