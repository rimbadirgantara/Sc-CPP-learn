#include <iostream>

using namespace std;

int main()
{
	float a, b, hasil;
	char aritmatika;

	cout << "Selamat datang di program kalkulator \n \n";

	// masukkan input dari user
	cout << "masukkan nilai pertama = ";
	cin >> a;
	cout << "Pilih operator [+, -, *, /] = ";
	cin >> aritmatika;
	cout << "masukkan nilai kedua = ";
	cin >> b;

	cout << "Hasil perhitungan :\n \n";

	// if (aritmatika == '+') {
	// 	hasil = a + b;
	// } else if (aritmatika == '-') {
	// 	hasil = a - b;
	// } else if (aritmatika == '*'){
	// 	hasil = a * b;
	// } else if (aritmatika == '/'){
	// 	hasil = a / b;
	// } else {
	// 	cout << "operator salah" << endl;
	// }

	switch(aritmatika){
		case '+':
			hasil = a + b;
			cout << a << aritmatika << b << " = " << hasil << endl;
			break;
		case '-':
			hasil = a - b;
			cout << a << aritmatika << b << " = " << hasil << endl;
			break;
		case '*':
			hasil = a * b;
			cout << a << aritmatika << b << " = " << hasil << endl;
			break;
		case '/':
			hasil = a * b;
			cout << a << aritmatika << b << " = " << hasil << endl;
			break;
		default:
			cout << "Operator tidak di temukan";
			break;
	}

	return 0;
}