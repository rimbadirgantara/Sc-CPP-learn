#include <iostream>
#include <cstdlib> // mengandung fungsi random
using namespace std;

int main()
{
	while(true){
		char lanjut;

		cout << "lembar dadu y/n ? ";
		cin >> lanjut;
			
		if(lanjut == 'y'){
			cout << 1 + rand() % 6 << endl;
		} else if(lanjut == 'n'){
			break;
		} else {
			cout << "warning: ketik y /n !!!" << endl;
		}
	}
	cin.get();
	return 0;
}