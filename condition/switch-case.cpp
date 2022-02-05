#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "masukkan nilai = ";
	cin >> a;

	switch(a){
		case 1:
			cout << "benar ini adalah 1" << endl;
			break; // jika nilai a = 1 dan ada break, progrm tidak akan menampilkan case lainnya
		case 2:
			cout << "benar ini adalah 2" << endl;
			break;
		case 3:
			cout << "benar ini adalah 3" << endl;
			break;
		case 4:
			cout << "benar ini adalah 4" << endl;
			break;
		case 5:
			cout << "benar ini adalah 5" << endl;
			break;
		default:
			cout << "Angka tidak di temukan" << endl;		
	}
	cout << "akhir dari program" << endl;

	cin.get();
	return 0;
}