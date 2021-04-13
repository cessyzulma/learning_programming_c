#include <iostream>
#include <conio.h>
using namespace std;
void baris()
{
	cout<<endl;
}
void nama()
{
    char *nama;
    nama="NAMAMU";
    cout<<"Nama : "<<nama;
    baris ();
	cout<<"Nama di alamat  : "<<&nama;
}
void nim()
{
   int nim ="Nimmu";
   int *ptr;
   ptr=&nim;
   cout<<"NIM : "<<nim;baris();
   cout<<"NIM di alamat   : "<<&nim;baris();
   cout<<"Ptr di alamat   : "<<&ptr;
}
main()
{
    nama();
   	baris();baris();
	nim();
   	getch();
}
