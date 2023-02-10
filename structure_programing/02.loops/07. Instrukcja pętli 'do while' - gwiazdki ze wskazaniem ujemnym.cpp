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
while(i);		// pêtla PRZYNAJMNIEJ RAZ siê wykona 
cin.ignore();	// BO WARUNEK JEST SPRAWDZANY NA KOÑCU
getchar();
return 0;
}
