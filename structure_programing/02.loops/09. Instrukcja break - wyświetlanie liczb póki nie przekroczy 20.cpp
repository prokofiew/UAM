#include<iostream>
#include<cstdio>
using namespace std;

// PROGRAM WYŒWIETLA LICZBY PARZYSTE, DOPÓKI ICH SUMA NIE PRZEKROCZY 20.

// JAK MO¯NA TEN PROGRAM ZROBIÆ BEZ INSTRUKCJI BREAK???

int main()
{
int sum=0;
for (int i=0; i<10; i++)
{
	cout<<2*i<<", ";
	sum=sum+2*i;
	if (sum>20)
		break;
}
cout<<"Jestem poza petla"<<endl;
cout<<"Sum wynosi "<<sum;
cin.ignore();
getchar();
return 0;
}
