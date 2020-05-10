#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	int nomornya[10] = {8, 17, 24, 34, 40, 16, 10, 47, 5};
	int carinomor, n, flag = 0;
	cout << " =============================================="<<endl;
	cout << "            Nurul Cessy Zulma                  "<<endl;
	cout << "              191011402706                     "<<endl;
	cout << " =============================================="<<endl<<endl;
	cout << "Data : ";
	  for (int s=0; s<10; s++)
	  	  cout<<setw(4) <<nomornya[s];
	cout <<endl <<endl;
	cout <<"Masukkan nomor yang ingin dicari : ";
	cin >> carinomor;
	  for (n=0; n<10; n++) {
	  	if (nomornya[n]==carinomor) {
	  		flag = 1;
	  		break;
		  }
	  }
	if (flag==1)
	  cout <<"Nomor ditemukan pada indek ke-"<<n<<endl;
	else
	  cout <<"Nomor tidak ditemukan" <<endl;    
}
