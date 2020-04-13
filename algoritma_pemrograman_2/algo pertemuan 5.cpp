	#include <stdio.h>
	#include <conio.h>
	#include <iostream>
	#include <cstdlib>
	using namespace std;
	int N (const char *s)
	{
		int x=0;
		for (;*s!='\0';s++)++x;
		return x;		
	}
	main (void)
	{
		cout << "Nama : Nurul Cessy Zulma" <<endl;
		cout << "Nim : 191011402706"	   <<endl;
		cout << "Kelas : 01TPLP024"        <<endl;
		cout << "==================================================================\n";
		cout << "====Program Menghitung Banyaknya Karakter Menggunakan Pointer====\n";
		cout << "====================================================================\n";
		cout <<endl;
		char string [89];
		cout <<"Ketik sebuah karakter";
		cin.getline(string, 100);
		cout<<endl;
		cout<<"\n Banyaknya karakter :"<<N(string);
		getch();
		return 0;  
	}
