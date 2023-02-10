#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
for (int i=0; i<10; i=i+1)		// parametry: 1. odkąd, 2. dokąd ale bez 10tki, 3. krok
{								              // to co w petli zawsze w klamrze
	cout<<i<<", ";
}
cin.ignore();
getchar();
return 0;
}
