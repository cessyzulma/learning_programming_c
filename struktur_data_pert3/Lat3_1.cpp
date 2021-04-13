
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

struct Mahasiswa
{
	char Nim[20];
	char Nama[20];
	char Alamat[40];
	short Umur;	
};
main()
{
	Mahasiswa Mhs;
	cout << "\n INPUT DATA BIODATA MAHASISWA\n";
	cout << "\n Nim	: "; cin.getline(Mhs.Nim,20);
	cout << " Nama	: "; cin.getline(Mhs.Nama,20);
	cout << " Alamat	: "; cin.getline(Mhs.Alamat,40); 
	cout << " Umur	: "; cin >> Mhs.Umur;
	
	cout << "\n Nim	: " << Mhs.Nim;
	cout << "\n Nama	: " << Mhs.Nama;
	cout << "\n Alamat	: " << Mhs.Alamat;
	cout << "\n Umur	: " << Mhs.Umur << " tahun";
	getch();
}


