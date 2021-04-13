#include <iostream>
#include <limits>
using namespace std;

struct Tinggal{

    char Jalan[40];

    char Kota[15];

    int  Pos;

};

struct Tgl_Lahir{

    int Tanggal;

    int Bulan;

    int Tahun;

};

struct Mahasiswa{

    char NIM[15];

    char Nama[25];

    Tinggal Alamat;

    Tgl_Lahir Lahir;

};

int main(){

    Mahasiswa Mhs[5];



    for(int i=0; i<5; i++){

        cout << "NIM    : ";

        cin >> Mhs[i].NIM;

        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "Nama   : ";

        cin.getline(Mhs[i].Nama, 25);

        cout << "Alamat : " << endl;

            cout << " \t Jalan    : ";

            cin.getline(Mhs[i].Alamat.Jalan, 40);

            cout << " \t Kota     : ";

            cin.getline(Mhs[i].Alamat.Kota, 15);

            cout << " \t Kode Pos : ";

            cin >> Mhs[i].Alamat.Pos;

        cout << "Tanggal Lahir : " << endl;

            cout << "\t Tanggal : ";

            cin >> Mhs[i].Lahir.Tanggal;

            cout << "\t Bulan   : ";

            cin >> Mhs[i].Lahir.Bulan;

            cout << "\t Tahun   : ";

            cin >> Mhs[i].Lahir.Tahun;

        cout << endl;

    }

    cout << endl << "Mencetak Kembali Anggota" << endl << endl;

    for(int i=0; i<5; i++){

        cout << "NIM    : " << Mhs[i].NIM << endl;

        cout << "Nama   : " << Mhs[i].Nama << endl;

        cout << "Alamat : " << endl;

            cout << "\t Jalan    : " << Mhs[i].Alamat.Jalan << endl;

            cout << "\t Kota     : " << Mhs[i].Alamat.Kota << endl;

            cout << "\t Kode Pos : " << Mhs[i].Alamat.Pos << endl;

        cout << "Tanggal Lahir : " << Mhs[i].Lahir.Tanggal << "-" << Mhs[i].Lahir.Bulan << "-" << Mhs[i].Lahir.Tahun;

        cout << endl << endl;

    }

}
