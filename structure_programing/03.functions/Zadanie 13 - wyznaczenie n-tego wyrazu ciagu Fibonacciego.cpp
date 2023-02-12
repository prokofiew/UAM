#include<iostream>
#include<cstdio>
using namespace std;


unsigned long int fibonacci (long int n) // liczba określająca numer wyrazu w ciągu
{
	if (n<=2)
		return 1;
	else
		return fibonacci(n-1)+fibonacci(n-2);
}


int main()
{
double n;	
cout<<"Program znajdujacy n-ty wyraz ciagu Fibonacciego"<<endl;
cout<<"Ktory wyraz ciagu Fibonacciego mam podac? "<<endl;
cin>>n;															//// liczba określająca numer wyrazu w ciągu
cout<<"N-ty wyraz ciagu Fibonacciego to: "<<fibonacci(n)<<endl;
system("pause");
return 0;
}