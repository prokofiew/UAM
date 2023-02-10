#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
float bok_a, bok_b;
do
{
	cout<<"Podaj dlugosc boku a: "<<endl;
	cin>>bok_a;
	cout<<"Podaj dlugosc boku b: "<<endl;
	cin>>bok_b;

	if (bok_a <= 0 || bok_b <= 0)
		cout << "Podaj poprawne dlugosci bokow: " << endl;

}
while (bok_a <= 0 || bok_b <= 0);


cout<<"Pole prostokata = "<<bok_a*bok_b;
cin.ignore();
getchar();
return 0;
}
