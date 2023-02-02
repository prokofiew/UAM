#include<iostream>
#include<cstdio>

using namespace std;

int main() 
{
// równanie ax + b = 0, czyli x = -b / a


// wprowadzanie liczb a i b do zmiennych
float a, b;
cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
// warunki
if (a == 0)
	if (b == 0)
		cout << "Rownanie ma nieskonczenie wiele rozwiazan";
	else 
		cout << "Rownanie sprzeczne";
else{ // obliczenie równania 
	float x;
	x=-b/a;
	cout << "x = " <<x;
};
cin.ignore();
getchar();
return 0;
}
