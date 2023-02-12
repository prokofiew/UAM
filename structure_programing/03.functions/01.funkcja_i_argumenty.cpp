#include<iostream>
#include<cstdio>
using namespace std;

float srednia_aryt (float a, float b) // funkcja zadeklarowana, zawsze u góry nad programem główny
										// funkcja to taki podprogram
{
	return (a+b)/2; // zwrócenie wartości przez funkcję, okreslona jako float przez funkją
}

int main()
{
cout<<"średnia arytmetyczna liczb 2.7 i 5 = "; //komunikat
cout<<srednia_aryt(2.5,7); // wywołanie funkcji z przekazywanymi parametrami jako wartości, czyli a=2.5 oraz b=7
cout<<endl;
system("pause");
return 0;
}
