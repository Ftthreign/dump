#include <iostream>

using namespace std;

int main(){
	int Matriks[3][2];
	
	for (int i=0; i < 3; i++){
		for (int j=0; j < 2; j++){
			cout << "elemen ke - " << i << ", " << j << " ";
			cin >> Matriks[i][j];
		}
	}
	
	for (int i = 0; i <3; i++){
		for (int j = 0; j<2; j++ ){
			cout << Matriks[i][j];
		}
		cout << endl;
	}
	
	
	return 0;
}
