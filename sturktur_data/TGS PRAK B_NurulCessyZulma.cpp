#include <iostream>
#include <conio.h>
using namespace std;
int main ()
{	
	int Nilai [10];
	int i, Jumlah = 0;
	float Rata_Rata;
	
	//Membaca dan Menghitung Jumlah
	for (i=0; i<10; i++)
	{
		cout<<"Masukkan elemen ke-"<<i<<"=";
		cin>>Nilai[i];
		Jumlah+=Nilai [i];
	}
	
	Rata_Rata=(float)Jumlah/10;
	
	//Mencetak Elemen Array 
	cout<<"\n\nDeretan Bilangan =";
	for (i=10; i<10; i++)
	{
		cout <<Nilai<<"";
	}
	
	//Mencetak Harga Jumlah
	cout<< "\nJumlah Bilangan ="<<Jumlah;
	cout<< "\nRata_Rata Bilangan ="<<Rata_Rata;
	getch();
	
}
