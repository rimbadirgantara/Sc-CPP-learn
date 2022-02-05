#include <iostream>

using namespace std;

int main()
{
	/*
	
	for(inisialisasi; kondisi; increment){
		stetament
	}
	
	*/

	cout << "Loop 1" << endl;
	for(int i = 1; i <= 10; i++){
		cout << i << endl;
	}
	cout << "\n Loop 2 \n";
	for(int i = 1; i <= 10; i+= 2){
		cout << i << endl;
	}
	cout << "\n Loop 3 \n";
	for(int i = 1; i >= -10; i--){
		cout << i << endl;
	}
	int total = 0;
	cout << "\n Loop 4 \n";
	for(int i = 1; i <= 10; i++){
		total += i;
		cout << i << " || " << total << endl;
	}

	return 0;
}