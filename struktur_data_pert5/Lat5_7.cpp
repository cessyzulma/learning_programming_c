#include <iostream>

using namespace std;

struct Mahasiswa{
   char NIM[20];
   char Nama[25];
   char Alamat[40];
   short Umur;
};
void Baca(Mahasiswa *);
void Cetak(Mahasiswa *);

int main(){
    Mahasiswa Mhs, *Ptr;
    Ptr = &Mhs;
    cout << "Membaca Nilai Anggota Struktur Menggunakan Pointer \n";
    Baca(Ptr);
    cout << "\nMencetak Nilai Anggota Struktur Menggunakan Pointer";
    Cetak(Ptr);
    cout << endl;
}

void Baca(Mahasiswa *Ptr){
    cout << "NIM    : ";
    cin.getline(Ptr->NIM, 20);
    cout << "Nama   : ";
    cin.getline(Ptr->Nama, 25);
    cout << "Alamat : ";
    cin.getline(Ptr->Alamat, 40);
    cout << "Umur   : ";
    cin >> Ptr->Umur;
}

void Cetak(Mahasiswa *Ptr){
    cout << "\nNIM    : " << Ptr->NIM;
    cout << "\nNama   : " << Ptr->Nama;
    cout << "\nAlamat : " << Ptr->Alamat;
    cout << "\nUmur   : " << Ptr->Umur;
}



