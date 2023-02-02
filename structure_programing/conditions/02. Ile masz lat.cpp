#include<iostream>
#include<cstdio>

using namespace std;

int main()

{
int lata; // przypisanie zmiennej lata jako interger
cout << "Ile masz lat ";
cin >> lata; // wczytanie danych z klawiatury do zmiennej lata
cout << "Ju¿ wiem. Masz "<<lata<< " lat/a";
cin.ignore(); // igrnoruje podany znak
getchar();
return 0;
}
