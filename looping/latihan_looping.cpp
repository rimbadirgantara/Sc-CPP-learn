#include <iostream>

using namespace std;

int main(){

	int a = 1;
	int b;
	int hasil;

	cout << "Input Value = ";
	cin >> b;

	cout << "Versi whle loop \n";
	while(a <= 10){
		hasil = a + b;
		cout << a << " + " << b << " = " << hasil << "\n";
		a++;
	}

	cout << "Versi do while \n";
	a = 1;
	do{
		hasil = a + b;
		cout << a << " + " << b << " = " << hasil << "\n";
		a++;
	} while (a <= 10);

	cout << "Versi for loop \n";
	for(int i = 1; i <= 10; i++){
		hasil = i + b;
		cout << i << " + " << b << " = " << hasil << endl;
	}

	// int o = 5;
	// cout << "Kotak \n";
	// for(int i = 1; i <= o; i++){
	// 	for(int j = 1; j <= o; j++){
	// 		cout << "*";
	// 	}
	// 	cout << endl;
	// }

	// cout << "Segitiga \n";
	// for (int a = 1; a <= o; a++)
	// {
	// 	for (int b = 1; b <= a; b++){
	// 		cout << "*";
	// 	}
	// 	cout << endl;
	// }

	// cout << "Segitiga sama kaki \n";
	// for(int q = 1; q <= o; q++){
	// 	for(int w = 1; w <= q; w++){
	// 		cout << "*";
	// 	}
	// 	cout << endl;
	// }
	// for(int e = 1; e >= o; e++){
	// 	for (int r = e; r <= o; r--)
	// 	{
	// 		cout << "*";
	// 	}
	// 	cout << endl;
	// }

	return 0;
}