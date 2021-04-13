#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
main()

{

	int Nilai [] = {45, 23, 50, 8, 12, 10, 15};
	int *Ptr_Nilai;
	int i;
	Ptr_Nilai = Nilai;
	cout << "\n Nilai Ptr_Nilai " << Ptr_Nilai;
	cout << "\n Alamat array Nilai " << Ptr_Nilai;
	cout << "\n Nilai yang ada pada alamat " << Ptr_Nilai << " adalah " << *Ptr_Nilai;
	cout << "\n Elemen Array indeks pertama : " << Nilai[0];
	cout << "\n\n Elemen Array (dgn Array) : ";

	for(i=0;i<7;i++)

		cout << Nilai[i] << " ";
		cout << "\n\n Elemen Array (dgn Pointer) : ";

	for(i=0;i<7;i++)

		cout << *(Nilai+i) << " ";

}
