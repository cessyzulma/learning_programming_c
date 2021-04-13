#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <iomanip>

using namespace std;

struct TINGGAL{
char jalan[50];
int kode_pos;
char kota[50];
};

struct TANGGAL{
char tanggal[5];
char bln[10];
char thn[4];
};

struct BIODATA{
char NIP[15],nama[25],jabatan[10],agama[10], unit_kerja[50];
TANGGAL tanggal_mulai_kerja;
TINGGAL alamat;
TANGGAL tanggal_lahir;
};

main()
{
BIODATA pegawai[5];
int i,a;
cout<<"Masukkan Jumlah data inputan (MAX 5) :";cin>>a;
for(i=0; i<a; i++){
system("cls");
cout<<"NIP : ";cin>>pegawai[i].NIP;
cout<<"Nama : ";cin>>pegawai[i].nama;
cout<<"Jabatan : ";cin>>pegawai[i].jabatan;
cout<<"Agama : ";cin>>pegawai[i].agama;
cout<<"—>Tanggal Lahir (dd\mm\yyyy)\n";
cout<<"Tanggal : ";cin>>pegawai[i].tanggal_lahir.tanggal;
cout<<"Bulan : ";cin>>pegawai[i].tanggal_lahir.bln;
cout<<"Tahun : ";cin>>pegawai[i].tanggal_lahir.thn;
cout<<"—>Alamat \n";
cout<<"Jalan : ";cin>>pegawai[i].alamat.jalan;
cout<<"Kota : ";cin>>pegawai[i].alamat.kota;
cout<<"Kode Pos : ";cin>>pegawai[i].alamat.kode_pos;
cout<<"—>Tanggal Mulai \n";
cout<<"Tanggal : ";cin>>pegawai[i].tanggal_mulai_kerja.tanggal;
cout<<"Bulan : ";cin>>pegawai[i].tanggal_mulai_kerja.bln;
cout<<"Tahun : ";cin>>pegawai[i].tanggal_mulai_kerja.thn;
cout<<"Unit Kerja : ";cin>>pegawai[i].unit_kerja;
}
system("cls");
cout<<"———–DATA PEGAWAI———–"<<endl;
for(i=0; i<a; i++){
cout<<"NIM : "<<pegawai[i].NIP<<endl
<<"Nama : "<<pegawai[i].nama<<endl
<<"Jabatan : "<<pegawai[i].jabatan<<endl
<<"Agama : "<<pegawai[i].agama<<endl
<<"Tanggal Lahir : "<<pegawai[i].tanggal_lahir.tanggal<<"-"
<<pegawai[i].tanggal_lahir.bln<<"-"
<<pegawai[i].tanggal_lahir.thn<<endl
<<"Alamat : "<<pegawai[i].alamat.jalan<<","
<<pegawai[i].alamat.kota<<"-"
<<pegawai[i].alamat.kode_pos<<endl
<<"Tanggal Mulai : "<<pegawai[i].tanggal_mulai_kerja.tanggal<<"-"
<<pegawai[i].tanggal_mulai_kerja.bln<<"-"
<<pegawai[i].tanggal_mulai_kerja.thn<<endl
<<"Unit Kerja : "<<pegawai[i].unit_kerja<<endl
<<"———————————"<<endl;
}

getch();
system("PAUSE");
}


