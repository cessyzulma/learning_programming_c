#include<iostream>

using namespace std;

struct tinggal{

	char jln[40];

	char kota[20];

	char pos[10];

};

struct tgl_lahir{

	int tanggal;

	int bulan;

	int tahun;

};

struct mahasiswa{

	char nim[15];

	char nama[20];

	tinggal alamat;

	tgl_lahir lahir;

};

int main(){

	mahasiswa mhs;

	cout<<" NIM   : ";cin.getline(mhs.nim,15);

	cout<<" Nama  : ";cin.getline(mhs.nama,20);

	cout<<" Alamat: "<<endl;

	cout<<"\tJalan   : ";cin.getline(mhs.alamat.jln,40);

	cout<<"\tKota    : ";cin.getline(mhs.alamat.kota,20);

	cout<<"\tKode POS: ";cin.getline(mhs.alamat.pos,10);

	cout<<endl;

	cout<<" Tanggal Lahir:"<<endl;

	cout<<"\tTanggal : ";cin>>mhs.lahir.tanggal;

	cout<<"\tBulan   : ";cin>>mhs.lahir.bulan;

	cout<<"\tTahun   : ";cin>>mhs.lahir.tahun;

	cout<<"\n\nMencetak Kembali Nilai Anggota\n\n";

	cout<<" NIM   : "<<mhs.nim;

	cout<<"\n Nama  : "<<mhs.nama;

	cout<<"\n Alamat:\n";

	cout<<"\n\tJalan    : "<<mhs.alamat.jln;

	cout<<"\n\tKota     : "<<mhs.alamat.kota;

	cout<<"\n\tKode POS : "<<mhs.alamat.pos;

	cout<<"\n Tanggal Lahir   :"<<mhs.lahir.tanggal<<"-";

	cout<<mhs.lahir.bulan<<"-"<<mhs.lahir.tahun;

return 0;

}
