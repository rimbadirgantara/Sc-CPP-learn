#include <iostream>

using namespace std;

int main(){

	float a = 6;
	int b = 4;

	float hasil;
	// operator +, -, /, *, %

	//pertambahan
	hasil = a + b;
	cout << a  << " + " <<  b << " = " <<  hasil << endl;

	//perngurangan
	hasil = a - b;
	cout << a  << " - " <<  b << " = " <<  hasil << endl;

	// perkalian
	hasil = a * b;
	cout << a  << " x " <<  b << " = " <<  hasil << endl;

	// modulus
	hasil = a / b;
	cout << a  << " / " <<  b << " = " <<  hasil << endl;


	// urutan eksekusi
	hasil = (a + b) * a;
	cout << hasil << endl;

	cin.get();
	return 0;
}