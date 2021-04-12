#include<iostream>
using namespace std;
int main()
{
	cout<<"	Nama 	: Nurul Cessy Zulma"<<endl;
	cout<<" Nim 	: 191011402706"<<endl;
	cout<<" Kelas 	: 04TPLP017"<<endl;

	int A[3][3],B[3][3],C[3][3];
	int m,n;
	cout<<"	Program Penjumlahan 2 Matriks"<<endl;
	cout<<"	=================================="<<endl;
	cout<<"Berikan Matriks Pertama (3x3):";
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			cin>>A[m][n];
		}
	}
	cout<<endl;
	
	cout<<"Berikan Matriks Kedua (3x3):";
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			cin>>B[m][n];
		}
	}
	cout<<endl;
	
	cout<<"Hasil:";
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			C[m][n]=A[m][n]+B[m][n];
		}
	}
	for(m=0;m<3;m++)
	{
		for(n=0;n<3;n++)
		{
			cout<<" "<<A[m][n];
		}
		if(m==1)
		{
			cout<<"+";
		}
		else
		cout<<"	";
		for(n=0;n<3;n++)
		{
			cout<<" "<<B[m][n];
		}
		if(m==1)
		{
			cout<<"=";
		}
		else
		cout<<"	";
		for(n=0;n<3;n++)
		{
			cout<<" "<<C[m][n];
		}
	cout<<endl;
	}
}
