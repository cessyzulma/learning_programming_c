#include<iostream>
#include<conio.h>
using namespace std;

struct TINGGAL
{
	char Jalan[40];
	char Kota[40];
	char Kode_Pos[10];
};
struct TANGGAL
{
	int Tanggal;
	int Bulan;
	int Tahun;
};
struct BIODATA
{
	char NIP[15];
	char Nama[20];
	TINGGAL Alamat;
	char Jabatan[40];
	char Agama[15];
	TANGGAL Tanggal_Lahir;
	char Tanggal_Mulai_Kerja[20];
	char Unit_Kerja[15];
};
int main()
{
	BIODATA pegawai[3];
	int i;
	cout << "\n BIODATA PEGAWAI \n";
	cout << "\n NIP			   : "; cin.getline(pegawai[i].NIP,15);
	cout << " Nama Lengkap		   : "; cin.getline(pegawai[i].Nama,20);
	cout << " Alamat			   : " <<  endl;
	cout << "\t\t Jalan	   : "; cin.getline(pegawai[i].Alamat.Jalan,40);
	cout << "\t\t Kota	   : "; cin.getline(pegawai[i].Alamat.Kota,40);
	cout << "\t\t Kode POS  : "; cin.getline(pegawai[i].Alamat.Kode_Pos,10);
	cout << " Jabatan		   : "; cin.getline(pegawai[i].Jabatan,40);
	cout << " Agama			   : "; cin.getline(pegawai[i].Agama,15);
	cout << " Tanggal Lahir		   : " << endl;
	cout << "\t\t Tanggal   : "; cin >> pegawai[i].Tanggal_Lahir.Tanggal;
	cout << "\t\t Bulan	   : "; cin >> pegawai[i].Tanggal_Lahir.Bulan;
	cout << "\t\t Tahun	   : "; cin >> pegawai[i].Tanggal_Lahir.Tahun;
	cout << " Tanggal Mulai Kerja	   : "; cin >> pegawai[i].Tanggal_Mulai_Kerja;
	cout << " Unit Kerja		   : "; cin >> pegawai[i].Unit_Kerja;
	cout << endl;
	
	cout << "\n MENCETAK BIODATA PEGAWAI \n";
	cout << "\n NIP			   : " << pegawai[i].NIP;
	cout << "\n Nama Lengkap		   : " << pegawai[i].Nama;
	cout << "\n Alamat			   : " <<  endl;
	cout << "\t\t Jalan	   : " << pegawai[i].Alamat.Jalan;
	cout << "\n\t\t Kota	   : " << pegawai[i].Alamat.Kota;
	cout << "\n\t\t Kode POS  : " << pegawai[i].Alamat.Kode_Pos;
	cout << "\n Jabatan		   : " << pegawai[i].Jabatan;
	cout << "\n Agama			   : " << pegawai[i].Agama;
	cout << "\n Tanggal Lahir		   : " << endl;
	cout << "\t\t Tanggal   : " << pegawai[i].Tanggal_Lahir.Tanggal;
	cout << "\n\t\t Bulan	   : " << pegawai[i].Tanggal_Lahir.Bulan;
	cout << "\n\t\t Tahun	   : " << pegawai[i].Tanggal_Lahir.Tahun;
	cout << "\n Tanggal Mulai Kerja	   : " << pegawai[i].Tanggal_Mulai_Kerja;
	cout << "\n Unit Kerja		   : " << pegawai[i].Unit_Kerja;
	cout << endl;
	
	getch();
}
