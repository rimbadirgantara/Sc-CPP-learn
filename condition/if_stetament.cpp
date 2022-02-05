#include <iostream>

using namespace std;

int main()
{
	int a;

	cout << "masukkan angka = ";
	cin >> a;

	// if statement
	// kondisi dalam bentuk boolean
	// if (a)
	// {
	// 	cout << "hello" << endl;
	// }
	// cout << "selesai" << endl;

	// if else 
	// if (a == 5)
	// {
	// 	cout << "Nilai ini adalah 5" << endl;
	// } else {
	// 	cout << "niali ni tidak 5" << endl;
	// }

	// if else if
	if (a == 5)
	{
		cout << "Nilai ini adalah 5" << endl;
	} else if (a == 3) {
		cout << "niali ni adlaah 3" << endl;
	} else if (a == 1) {
		cout << "nilai ini adalah 1";
	}

	cin.get();
	return 0;	
}