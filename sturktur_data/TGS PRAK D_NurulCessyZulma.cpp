#include <iostream>

#include <conio.h>

#include <windows.h>

using namespace std;

main()

{

	cout<<"Nama	: Nurul Cessy Zulma"<<endl;

	cout<<"NIM	: 191011402706"<<endl;

	cout<<"Nilai	: 04TPLP017"<<endl;

	

	int nilai[20];

	int posisi[20];

	int i, n, bil, banyak=0;

	bool ketemu;

	


	cout<<"Masukan banyak bilangan=";

	cin>>n;

	cout<<endl;

	

	//membaca elemen array


	for (i=0;i<n;i++){

		cout<<"masukan elemen ke-"<<i<<"=";

		cin>>nilai[i];

	}


	cout<<"\n\nDeretan bilangan=";

	for(i=0;i<n;i++)

	cout<<nilai[i]<<"";


	cout<<"\n\nMasukan bilangan yang akan dicabut=";

	cin>>bil;

	

	//pencarian

	for(i=0;i<n;i++){

		if(nilai[i]==bil)

		{

			ketemu = true;

			posisi[banyak]=i;

			banyak++;

		}

	}

	if(ketemu){


		cout<<"bilangan"<<bil<<"ditentukan sebanyak"<<banyak;

		cout<<"\npada posisi ke=";

		for(i=0;i<banyak;i++)

		cout<<posisi[i]<<"";

	}

	else

	cout<<"bilangan"<<bil<<"tidak ditemukan";


	getch();

}
