#include <iostream>

#include <limits>

using namespace std;



struct NILAI{

    char NIM[15];

    char Nama[25];

    float Nilai_Tugas;

    float Nilai_UTS;

    float Nilai_UAS;

    float Nilai_Akhir;

    char Nilai_Huruf;

};



int main(){

    NILAI Mhs;

    cout << "NIM         : ";

    cin >> Mhs.NIM;

    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    cout << "Nama        : ";

    cin.getline(Mhs.Nama, 25);

    cout << "Nilai Tugas : ";

    cin >> Mhs.Nilai_Tugas;

    cout << "Nilai UTS   : ";

    cin >> Mhs.Nilai_UTS;

    cout << "Nilai UAS   : ";

    cin >> Mhs.Nilai_UAS;



    Mhs.Nilai_Akhir = 0.2 * Mhs.Nilai_Tugas + 0.35 * Mhs.Nilai_UTS + 0.45 * Mhs.Nilai_UAS;

    if(Mhs.Nilai_Akhir > 85 && Mhs.Nilai_Akhir <= 100) Mhs.Nilai_Huruf = 'A';

    else if(Mhs.Nilai_Akhir > 70 && Mhs.Nilai_Akhir <= 85) Mhs.Nilai_Huruf = 'B';

    else if(Mhs.Nilai_Akhir > 55 && Mhs.Nilai_Akhir <= 70) Mhs.Nilai_Huruf = 'C';

    else if(Mhs.Nilai_Akhir > 40 && Mhs.Nilai_Akhir <= 55) Mhs.Nilai_Huruf = 'D';

    else if(Mhs.Nilai_Akhir >= 0 && Mhs.Nilai_Akhir <= 40) Mhs.Nilai_Huruf = 'E';

    else Mhs.Nilai_Huruf = '-';



    cout << endl;

    cout << "Nilai Akhir : " << Mhs.Nilai_Akhir << endl;

    cout << "Nilai Huruf : " << Mhs.Nilai_Huruf << endl;

}
