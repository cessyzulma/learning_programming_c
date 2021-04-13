#include <iostream>

using namespace std;

struct Mahasiswa{
   char NIM[20];
   char Nama[25];
   char Alamat[40];
   short Umur;
};
void Baca(Mahasiswa &);
void Cetak(Mahasiswa &);

int main(){
    Mahasiswa Mhs;
    cout << "Membaca Nilai Anggota Struktur \n";
    Baca(Mhs);
    cout << "\nMencetak Nilai Anggota Struktur";
    Cetak(Mhs);
    cout << endl;
}

void Baca(Mahasiswa &Mhs){
    cout << "NIM    : ";
    cin.getline(Mhs.NIM, 20);
    cout << "Nama   : ";
    cin.getline(Mhs.Nama, 25);
    cout << "Alamat : ";
    cin.getline(Mhs.Alamat, 40);
    cout << "Umur   : ";
    cin >> Mhs.Umur;
}

void Cetak(Mahasiswa &Mhs){
    cout << "\nNIM    : " << Mhs.NIM;
    cout << "\nNama   : " << Mhs.Nama;
    cout << "\nAlamat : " << Mhs.Alamat;
    cout << "\nUmur   : " << Mhs.Umur;
}
