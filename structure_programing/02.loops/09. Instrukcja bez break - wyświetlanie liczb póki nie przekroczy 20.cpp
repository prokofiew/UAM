#include<iostream>
#include<cstdio>
using namespace std;

// PROGRAM WY�WIETLA LICZBY PARZYSTE, DOP�KI ICH SUMA NIE PRZEKROCZY 20.

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
