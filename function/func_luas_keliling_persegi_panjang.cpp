#include <iostream>

using namespace std;

int luas_persegi_panjang(double p, double l){
	double luas = p * l;
	return luas;
}
int keliling_persegi_panjang(double p, double l){
	double keliling = 2 * (p + l);
	return keliling;
}

void tampilkan_luas(double p, double l){
	cout << "luasnya adalah " << luas_persegi_panjang(p, l) << endl;
}
void tampilkan_keliling(double p, double l){
	cout << "keliling nya adalah " << keliling_persegi_panjang(p, l);	
}

int main()
{
	double panjang, lebar;
	cout << "Panjang: ";
	cin >> panjang;
	cout << "Lebar: ";
	cin >> lebar;
	tampilkan_luas(panjang, lebar);
	tampilkan_keliling(panjang, lebar);

	cin.get();
	return 0;
}