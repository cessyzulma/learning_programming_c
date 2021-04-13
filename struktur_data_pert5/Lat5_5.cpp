#include <iostream>
#include <iomanip>

using namespace std;

const int N = 100;
void Baca(int[], int &);
void Cetak(int[N], int &);
void Jumlah(int[N], int &, int &, float&);

int main(){
    int M;
    int Nilai[N];
    int Jlh = 0;
    float Rata;
    cout << "Banyak Elemen : ";
    cin >> M;
    Baca(Nilai, M);
    cout << "\nElemen Elemen : ";
    Cetak(Nilai, M);
    Jumlah(Nilai, M, Jlh, Rata);
    cout << "\nJumlah Bilangan : " << Jlh;
    cout << "\nRata-Rata Bilangan : " << Rata;
    cout << endl;
}

void Baca(int Nilai[], int &M){
    for(int i=0; i<M; i++){
        cout << "Elemen ke-" << i << " : ";
        cin >> Nilai[i];
    }
}

void Cetak(int Nilai[], int &M){
    for(int i=0; i<M; i++){
        cout << setw(3) << Nilai[i];
    }
}

void Jumlah(int Nilai[], int &M, int &Jlh, float &Rata){
    for(int i=0; i<M; i++){
        Jlh+= Nilai[i];
        Rata = (float) Jlh / M;
    }
}


