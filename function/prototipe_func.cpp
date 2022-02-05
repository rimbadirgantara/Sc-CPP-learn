#include <iostream>

using namespace std;

// prototipe
double hitung_luas(double p, double l);
void println(double x);

int main()
{
	double p, l, luas;
	cout << "Panjang: ";
	cin >> p;
	cout << "Lebar: ";
	cin >> l;
	luas = hitung_luas(p, l);
	println(luas);
	cin.get();
	return 0;
}

double hitung_luas(double p, double l){
	return p * l;
}

void println(double x){
	cout << "Hasil: " << x << endl;
}