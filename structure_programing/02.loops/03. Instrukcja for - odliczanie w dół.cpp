#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
int n;
cout<<"Podaj od ilu mam odliczyc"<<endl;
cin>>n;
for (int i=n; i>=0; i--) 				// i-- dekrementacja (zmniejszenie zmiennej o sta³¹ wartoœæ)
{
	cout<<i<<", ";
}
cin.ignore();
getchar();
return 0;
}
