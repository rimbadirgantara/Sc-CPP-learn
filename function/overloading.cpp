#include <iostream>

using namespace std;

// overloading = menimpa

// basic func
int luas_kotak(int p, int l){
	int luas = p * l;
	return luas;
}
// func overloading
int luas_kotak(int p = 10){
	int luas = p * p;
	return luas;
}

//basic func
double luas_kotak(double p, double l){
	double luas = p * p;
	return luas;
}
// func overloading
double luas_kotak(double p = 2){
	double luas = p * p;
	return luas;
}

int main()
{
	/* 
		Jadi, basic func nomor 1 itu di berikan 2 argumen,
		sedangkan func no 2 itu diberikan 1 argumen, 
		agar tidak error di berikan over loading func untuk menimpa basic func.

		over loading yang artinya func yang menimpa basic func
	*/
	cout << "1. luas kotak 2x3: << " << luas_kotak(2, 3) << endl;
	cout << "2. luas kotak 2x2: << " << luas_kotak(5) << endl;
	cout << "3. luas kotak 2.5x2.5: << " << luas_kotak(2.5, 3.6) << endl;
	cout << "4. luas kotak 2.5x2.5: << " << luas_kotak(3.6) << endl;
	cin.get();
	return 0;
}