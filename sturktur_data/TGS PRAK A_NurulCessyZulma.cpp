#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int Nilai [10] = {8, 12, 20, 15, 7, 5, 6, 4, 32, 3};
	int i, jumlah = 0;
	float Rata_Rata;
	
	cout<<"Nama : Nurul Cessy ZUlma"<<endl;
	cout<<"NIM  : 191011402706"<<endl;
	cout<<"Kelas: 04TPLP017";
	
	//Menghitung jumlah
	for (i=0; i<10; i++)
			jumlah += Nilai [i];
	Rata_Rata = (float) jumlah/10;
	
	//Mencetak Elemen Array 
	cout<< "\n\nDeretan Bilangan = ";
	for (i=0; i<10; i++)
		cout<<Nilai[i]<<"";
		
	//Mencetak Harga Jumlah
	cout<< "\nJumlah Bilangan ="<<jumlah;
	cout<< "\nRata_Rata Bilangan = "<<Rata_Rata;
	getch();
	
}
