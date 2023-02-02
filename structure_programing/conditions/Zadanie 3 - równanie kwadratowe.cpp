#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;

int main()

//równanie ax^2 + bx + c = 0 
// x = -b/a
//obliczanie delty ^ = b2 -4ac
//wzory x1=-b-(pierw)2a, x2=-b+(pierw)2a


{
int a, b, c;
cout << "a = ";
cin >> a;
cout << "b = ";
cin >> b;
cout << "c = ";
cin >> c;
	
if (a==0)	// gdy a jest równe zero oraz gdy a i b jest równe zero
	if (b==0)
		cout << "Rownanie ma nieskonczenie wiele rozwiazan";
	else 
		cout << "Rownanie sprzeczne";
else	// gdy a nie jest równe zero - obliczanie rozwi¹zañ z delty
{
double x, x1, x2;	// x jako zmienna 
double delta;	// delta jako zmienna przecinkowa
delta=b*b-4*a*c; 
if (delta>0)
	{
	x1=(-b-sqrt(delta))/(2*a);
	x2=(-b+sqrt(delta))/(2*a);
	cout << "x1 = " <<x1<< "\n";
	cout << "x2 = " <<x2<< "\n";
	}
	else if (delta==0)	// delta = 0
		{
		x=-b/(2*a);
		cout << "X = " <<x1;
		}	
	else if	(delta<0) 
		cout << "Nie ma rozwiazan dla tego rownania";
		
}
return 0;
}
