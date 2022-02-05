#include <iostream>

using namespace std;

//global scope
int x = 10; // varibel global

int ambil_global(){
	return x; // mengambil variabel global
}

int x_local(){
	int x = 5; // variabel local scope nya ambil_global()
	return x; 
}

int main()
{
	cout << "1. variabel global: " <<  x << endl;
	int x = 8;
	cout << "2. variabel lokal main: " << x << endl;
	cout << "3. variabel ambil ambil_global: " << ambil_global() << endl;
	cout << "4. variabel lokal: " << x << endl;
	cout << "5. variabel dari x_local: " << x_local() << endl;
	
	cout << "6. variabel dari lokal main: " << x << endl;
	{
		// block scope
		cout << "7. variabel lokal main: " << x << endl;
		int x = 1;
		cout << "8. variabel dari block scope: " << x << endl;

	}
	cout << "9. variabel dari local main: " << x << endl;
	cout << "10. variabel dari global scope: " << ::x << endl;

	cin.get();
	return 0;
	// compile, run and look
}