#include <iostream>
using namespace std;
int main()
{
	int y,z;
	cout << "-----------------------------------------------------------------------"<<endl;
	cout <<"Nama : Nurul Cessy Zulma"<<endl;
	cout <<"Nim : 191011402706"<<endl;
	cout <<"Kelas : 01TPLP024"<<endl;
	cout <<"------------------------------------------------------------------------"<<endl;
	cout <<"Masukkan nilai :";
	cin >>z;
	cout <<"-------------------------------------/n";
	
	cout <<"Bilangan Ganjil :"<<endl;
	for ( y=z; y<=40; y++){
		if (y%2!=0) cout <<y<<" ";
	}
	cout <<endl;
	cout <<"Bilangan Genap :" <<endl;
		for  ( y=z; y<=40; y++){
			if (y%2!=0) cout <<y<<" ";
		}
}
