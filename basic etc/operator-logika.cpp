#include <iostream>

using namespace std;

int main()
{
	/*
	operator logika not, and, or
	*/

	int a = 3;
	int b = 2;

	bool hasil;


	//not = !
	hasil = !(a == 3);

	// and = and // kedua nilai harus benar untuk menghasilkan true
	cout << "untuk and \n";
	hasil = (a == 3) and (b == 2); // true dan true
	cout << hasil << endl;

	hasil = (a == 4) and (b == 2); // false dan true
	cout << hasil << endl;

	hasil = (a == 3) && (b == 4); // true dan false
	cout << hasil << endl;

	hasil = (a == 31) && (b == 21); // false dan false
	cout << hasil << endl;


	// or = jka salah satu nilai true maka hasil true
	cout << "untuk or \n";
	hasil = (a == 3) or (b == 2); // true dan true
	cout << hasil << endl;

	hasil = (a == 4) or (b == 2); // false dan true
	cout << hasil << endl;

	hasil = (a == 3) || (b == 4); // true dan false
	cout << hasil << endl;

	hasil = (a == 31) || (b == 21); // false dan false
	cout << hasil << endl;


	cin.get();
	return 0;
}