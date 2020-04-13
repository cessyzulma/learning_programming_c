#include <iostream>
using namespace std;
int main ()
{
	char skip=0;
	cout <<"Nama : Nurul cessy zulma"<<endl;
	cout <<"Nim  :191011402706"<<endl;
	cout <<"-----------------------------------------\n";
	cout <<"PROGRAM MENGGUNAKAN FOR DAN GOTO"<<endl;
	cout <<"Masukkan angka [X/Y] :";cin>>skip;
	cout <<"2"<<endl;
	if (skip=='X') goto skip;
	cout <<"4"<<endl;
	skip:
	cout <<"6"<<endl;
	
	return 0; 
}
