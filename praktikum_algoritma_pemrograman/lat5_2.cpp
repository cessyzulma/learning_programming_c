#include <iostream>
using namespace std;
int main()
{
	int y;
	cout <<"                              Nama : Nurul cessy zulma          "<<endl;
	cout <<"                               UNIVERSITAS PAMULANG             "<<endl;
	cout <<"---------------------------------------------------------------------\n";
	cout <<"Program Menggunakan For, Contine dan Break :"<<endl;
	for (y=0; y<20; y++){
		
		if (y==4) continue;
		cout <<"Bilangan" <<y<<endl;
		if (y==19) break;
	}
}
