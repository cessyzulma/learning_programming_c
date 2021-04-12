#include<iostream>
#include<conio.h>
using namespace std;
int main(){

	int nilai[10];
	int i, n, terbesar;


cout<<"Nama : Nurul Cessy Zulma"<<endl;
cout<<"NIM  : 191011402706"<<endl;
cout<<"Kelas: 04TPLP017"<<endl<<endl;


	cout<<"Masukan banyaknya bilangan = ";

	cin>>n;

	cout<<endl;

	

//Membaca element array

for(i=0; i<n; i++){

	cout<<"Masukan Element ke-"<<i<<"= ";

	cin>>nilai [i];

}

terbesar =nilai [1]; //elemen pertama dibuat sebagai Terbesar

for (i=1; i<n; i++){

	if (nilai [i]>terbesar)

	terbesar =nilai [i];

}

//Mencetak bilangan terbesar

cout<<"\nBilangan Terbesar = "<<terbesar;

getch();

}
