#include <iostream>
using namespace std;
int main()
{
	int x;
	cout<<"Masukkan Nilai:";
	cin>> x;
	if((x>=81) && (x<=100)){
		cout<<"A"<<endl;
	}
	
	if ((x>=71) && (x<=81)){
		cout  <<"B"<<endl;
	}
	
	if ((x>=61) && (x<=71)){
		cout <<"C"<<endl;
	}
	
	if ((x>=51) && (x<=61)){
		cout<<"D"<<endl;
	}
	
	if ((x>=0) && (x<=51)){
		cout<<"E"<<endl;
	}
}

