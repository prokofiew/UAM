#include<iostream>
#include<cstdio>
using namespace std;

// PROGRAM WY�WIETLA LICZBY PARZYSTE, DOP�KI ICH SUMA NIE PRZEKROCZY 20.

// JAK MO�NA TEN PROGRAM ZROBI� BEZ INSTRUKCJI BREAK???

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
