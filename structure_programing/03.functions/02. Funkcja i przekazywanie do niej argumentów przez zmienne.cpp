#include<iostream>
#include<>cstdio>
using namespace std;

float srednia_aryt (float a, float b) // funkcja, zawsze u góry nad programem g³ównym
										// zmienne lokalne funkcji a i b s¹ znane tylko w tej funkcji
{
	return (a+b)/2;
}

int main()
{
float x,y; //zmienne lokalne funkcji main(programu g³ównego)
cout<<"Podaj 2 liczby, z których mam policzyc srednia: "<<endl;
cin>>x>>y;
cout<<"Srednia arytmetyczna tych liczb = ";
cout<<srednia _aryt(x,y); // wywo³anie funkcji z przekazywanymi parametrami jako zmienne od uzytkownika
cout<<endl;
system("pause");
return 0;
}
