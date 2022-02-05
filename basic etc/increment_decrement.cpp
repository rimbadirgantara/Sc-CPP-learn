#include <iostream>

using namespace std;

int main()
{
	// increment dan decrement
	// preincrement dan postincrement

	int a = 5;
	int b = 5;
	int c = 5;
	int d = 5;

	// postincrement
	cout << "Increment" << endl;
	cout << "Nilai awal " << a << endl;
	a++;
	cout << "Nilai setelah di increment ++ = " << a << endl << endl;

	// preincrement
	cout << "Preincrement" << endl;
	cout << "Nilai awal " << b << endl;
	++b;
	cout <<  "Nilai setelah di preincrement ++ = " << b << endl << endl;	

	// decrement
	cout << "Decrement" << endl;	
	// postincrement
	cout << "Nilai awal " << c << endl;
	c--;
	cout <<  "Nilai setelah di decrement -- = " << c << endl << endl;

	// preincrement
	cout << "Predecrement" << endl;
	cout << "Nilai awal " << d << endl;
	--d;
	cout <<  "Nilai setelah di decrement -- = " << d << endl << endl;

	return 0;
}