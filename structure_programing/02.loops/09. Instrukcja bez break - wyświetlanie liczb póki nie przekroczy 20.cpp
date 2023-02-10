#include<iostream>
#include<cstdio>
using namespace std;

// PROGRAM WYŒWIETLA LICZBY PARZYSTE, DOPÓKI ICH SUMA NIE PRZEKROCZY 20.

// bez instrukcji break

int main()
{
int sum=0;
int i=0;
do
{
	cout<<2*i<<", ";
	sum=sum+2*i;
	i++;
}
while (sum<20);
cout<<"Jestem poza petla"<<endl;
cout<<"Sum wynosi "<<sum;
cin.ignore();
getchar();
return 0;
}
