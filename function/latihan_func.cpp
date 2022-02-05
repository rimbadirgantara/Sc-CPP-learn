#include <iostream>

using namespace std;

int ketupat(int n){
	int a, b, c, d;
	int e, f, g, h;
	// int n;

	for(a = 1; a <= n; a++){
		for(b = a; b < n; b++){
			cout << " ";
		} 
		for(c = 1; c <= a; c++){
			cout << "*";
			for(int d = c; d <= c; d++){
				cout << "*";
			}
		}
		cout << endl;
	}

	for (int e = 1; e <= n; e++)
	{
		for( int f = 1; f < e; f++){
			cout << " ";
		}
		for( int g = n; g >= e; g-- ){
			cout << "*";			
		}
		for( int h = n; h >= e; h-- ){
			cout << "*";
		}
		
		cout << endl;
	}
	return n;
}

int segitiga(int n){
	int a, b, c, d, e, f, g;
	
	
	for(c = 1; c <= n; c++ ){
		for( d = n; d > c; d-- ){
			cout << " ";
		}
		for( e = 1; e <= c; e++ ){
			cout << "*";
		}
		for( b = 1; b <= c; b++){
			cout << "*";
		}
		cout << endl;
	}
	return n;
}

int main()
{
	int n;
	int pilih;

	while(true){

		cout << " 1. segitiga " << endl;
		cout << " 2. ketupat " << endl;
		cout << " 0. keluar " << endl;
		cout << "Silahkan pilih: ";
		cin >> pilih;
		
		
		if( pilih == 1){
			cout << "Masukkan Nilai n: ";
			cin >> n;
			segitiga(n);
		}else if(pilih == 2){
			cout << "Masukkan Nilai n: ";
			cin >> n;
			ketupat(n);
		}else if(pilih == 0){
			cout << "keluar" << endl;
			break;
		}else{
			cout << "Masukin yang bener!";
		}

	}
	cin.get();
	return 0;
}