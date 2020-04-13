#include <iostream>
using namespace std;
main ()
{
	char kode;
	cout << "================================\n";
	cout << "Nama : Nurul Cessy Zulma\n";
	cout << "Nim : 191011402706\n";
	cout << "Kelas : 01TPLP024\n";
	cout << "================================\n";
	cout << ("Masukkan Kode [S,P,L]: ") ; cin >> kode;
	cout << "==================================\n";
	
	switch (kode)
	{
		case 'S' :
		int sisiA,sisiB,alas,tinggi,kelilingsegitiga,luassegitiga;
		cout << ("Masukkan Luas Dan Keliling Segitiga\n");
		cout << endl;
		cout << ("Masukkan Panjang Sisi A :") ; cin>>sisiA;
		cout << ("Masukkan Panjang Sisi B :") ; cin>>sisiB;
		cout << ("Masukkan Alas           :") ; cin>>alas;
		cout << "=======================================\n";
		kelilingsegitiga=sisiA+sisiB+alas;
		cout << ("kelilingnya Adalah     :") ; cout<<kelilingsegitiga;
		cout << endl;
		luassegitiga=0,5*alas*tinggi;
		cout << ("Luasnya Adalah         :") ; cout<<luassegitiga;
		cout << endl;
		cout << "========================================\n";
		break;
		
		case 'P' :
		int panjangpp,lebarpp,luaspp,kelilingpp;
		cout << ("Menghitung Luas Dan Keliling Persegi Panjang\n");
		cout << endl;
		cout << ("Masukkan Panjang  :") ; cin>>panjangpp;
		cout << ("Masukkan Panjang  :") ; cin>>lebarpp;
		cout << "=======================================\n";
		luaspp=panjangpp*lebarpp;
		cout << ("Luasnya Adalah     :") ; cout<<luaspp;
		cout << endl;
		kelilingpp=(2*panjangpp)+(2*lebarpp);
		cout << ("Kelilingnya Adalah         :") ; cout<<kelilingpp;
		cout << endl;
		cout << "========================================\n";
		break;
		
		case 'L':
		int jarijari,kelilingl,luasl;
		cout << ("Menghitung Luas Dan Keliling Lingkaran\n");
		cout << endl;
		cout << ("Masukkan Jari - Jari  :") ; cin>>jarijari;
		cout << ("Masukkan Panjang  :") ; cin>>lebarpp;
		cout << "=======================================\n";
		kelilingl=3*3.14*jarijari;
		cout << ("Kelilingnya Adalah     :") ; cout<<kelilingl;
		cout << endl;
		luasl=3.14*jarijari*jarijari;
		cout << ("Luasnya Adalah         :") ; cout<<luasl;
		cout << endl;
		cout << "========================================\n";
		break;
		default :
			cout << ("Kode Salah");		
			
	}
}

