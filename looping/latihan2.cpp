#include <iostream>
using namespace std;

int main(){
	int a, b, c, d;
	int e, f, g, h;
	int n = 200;

	for(a = 1; a <= n; a++){
		for(b = a; b < n; b++){
			cout << " ";
		} 
		for(c = 1; c <= a; c++){
			cout << "*";
			for(int d = c; d <= c; d++){
				cout << "*";
			}
		}
		cout << endl;
	}

	for (int e = 1; e <= n; e++)
	{
		for( int f = 1; f < e; f++){
			cout << " ";
		}
		for( int g = n; g >= e; g-- ){
			cout << "*";			
		}
		for( int h = n; h >= e; h-- ){
			cout << "*";
		}
		
		cout << endl;
	}
}