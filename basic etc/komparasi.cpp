#include <iostream>

using namespace std;

int main(){

	int a = 2;
	int b = 2;

	bool hasil, hasil2;

	// komparasi, relation expresion

	//sebanding
	hasil = (a == b);
	// tidak sebanding
	hasil2 = (a != b);
	//kurang dari
	hasil = (a < b);
	//lebih dari
	hasil2 = (a > b);
	//kurang dari sama dengan
	hasil = (a <= b);
	//lebih dari sama dengan hasil2 = (a >= b);

	cout << hasil << endl;
	cout << hasil2 << endl;

	cin.get();
	return 0;
}