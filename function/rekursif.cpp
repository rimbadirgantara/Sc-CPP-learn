#include <iostream>

using namespace std;

/* func rekursif = func yang mengulang diri sendiri */

// func terbatas
int	pangkat_iterasi(int a, int b){
	int hasil = a;
	for(int i = 1; i < b; i++){
		// cout << i << endl;
		hasil =  hasil * a;
	}
	return hasil;
}
int pangkat_rekursif(int a, int b){
	if (b <= 1)
	{
		cout << "akhir dari rekursif \n";
		return a;
	} else {
		cout << "rekursif\n";
		return a * pangkat_rekursif(a, (b - 1));
	}
}

int main()
{
	int a, b;
	cout << "angka: ";
	cin >> a;
	cout << "pangkat: ";
	cin >> b;
	cout << "Hasil: " << pangkat_iterasi(a, b) << endl;
	cout << "Hasil rekursife: " << pangkat_rekursif(a, b) << endl;

	cin.get();
	return 0;
}