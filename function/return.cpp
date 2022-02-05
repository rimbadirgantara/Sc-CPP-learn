#include <iostream>

using namespace std;

int kuadrat(int x){
	int y;
	y = x * x;
	return y;
}

int tambah(int a, int b){
	int c;
	c = a + b;
	return c;
}

int main()
{
	int input, hasil, a, b;
	cout << "masukkan nilai kuadrat dari: ";
	cin >> input;

	hasil = kuadrat(input);

	cout << hasil << endl;

	cout << "Pertambahan \n";
	cout << "masukkan nilai a: ";
	cin >> a;
	cout << "masukkan nilai b: ";
	cin >> b;
	cout << a << " + " << b << " = " << tambah(a, b);

	cin.get();
	return 0;
}