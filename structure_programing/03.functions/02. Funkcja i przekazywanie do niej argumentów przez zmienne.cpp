#include<iostream>
#include<>cstdio>
using namespace std;

float srednia_aryt (float a, float b) // funkcja, zawsze u g�ry nad programem g��wnym
										// zmienne lokalne funkcji a i b s� znane tylko w tej funkcji
{
	return (a+b)/2;
}

int main()
{
float x,y; //zmienne lokalne funkcji main(programu g��wnego)
cout<<"Podaj 2 liczby, z kt�rych mam policzyc srednia: "<<endl;
cin>>x>>y;
cout<<"Srednia arytmetyczna tych liczb = ";
cout<<srednia _aryt(x,y); // wywo�anie funkcji z przekazywanymi parametrami jako zmienne od uzytkownika
cout<<endl;
system("pause");
return 0;
}
