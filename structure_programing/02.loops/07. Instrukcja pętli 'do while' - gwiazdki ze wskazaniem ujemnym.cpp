#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
int i=4;
do
{
	cout<<'*';
	i--;		// czyli i = i - 1
}
while(i);		// p�tla PRZYNAJMNIEJ RAZ si� wykona 
cin.ignore();	// BO WARUNEK JEST SPRAWDZANY NA KO�CU
getchar();
return 0;
}
