#include<iostream>
#include<cstdio>
using namespace std;

void zmien (int &a ) // przekazywanie argumentu przez referencje (tylko tu jest zmiana!)
					// funkcja modyfikuje wartoœæ zmiennej a, teraz bêdzoe ona mia³a wartoœc 6
{ 
	a=a+3;
	cout<<"wewnatrz funkcji zmienna ma wartosc: "<<a<<endl;
}

int main()
{
int a=3;
cout<<"przed wywolaniem funkcji zmienna ma wartosc: "<<a<<endl;
zmien(a);
cout<<"Po wyjsciu z funkcji zmienna ma wartosc: "<<a;
// powyjœciu z funkcji znów odwo³ujemysie do zmiennej a; teraz ma ona wartoœc 6.
cout<<endl;
system("pause");
return 0;
}
