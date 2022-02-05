#include <iostream>

using namespace std;

int main()
{ 
	/*
	dp {
		aksi
	} while (syarat)
	*/

	int a = 1;
	do{
		cout << a << ". hore" << endl;
		a++;
	} while (a <= 10);

	cout << "selesai" << endl;

	cin.get();
	return 0;
}