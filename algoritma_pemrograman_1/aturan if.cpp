	#inculde <iostream> 
	using namespace std ; 
	int main (){ 
	
		int nilai 
		cout << "Masukin Nilai:" ;
		cin >> nilai;
		if (nilai <= 100 && nilai >= 80) {
			cout << "Grade A" << endl; 
			cout << "lulus" << endl;
	} 	else if (nilai <= 79 && nilai >= 65){
			cout << "Grade B" << endl; 
			cout << "lulus" << endl;
	} 	else if (nilai <= 55 && nilai >= 45){
			cout << "Grade C" << endl;
			cout << "lulus" << endl;
	} 	else if (nilai <= 44 && nilai >= 35){
			cout << "Grade D" << endl; 
			cout << "lulus" << endl; 
	} 	else  
			cout << "Tidak lulus" << endl;	
	
	}

	
