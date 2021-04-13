#include<iostream>
#include<conio.h>
using namespace std;
main()

{

	int x=8, y;
	int *xPtr;
	xPtr = &x;
	y = *xPtr;

	cout << "\n Nilai	x	: " << x << endl;
	cout << " Alamat	x	: " << &x << endl;
	cout << " Alamat	x	: " << xPtr << endl;
	cout << "\n Nilai yang disimpan pada alamat " ;
	cout << xPtr << " adalah " << y;
	getch();

}
