#include <iostream>
#include <cmath>
using namespace std;

int main(){
	
	
	
	int jariJari;
	float hitungLuasLingkaran;
	
	
	const float PHI = 3.14;
	
	
	cout << "Masukkan Nilai Jari-Jari : ";
	cin >> jariJari;
	
	
	hitungLuasLingkaran = PHI * jariJari * jariJari;
	cout << "Luas Lingkaran : " << hitungLuasLingkaran << endl;
	

	
	
		
	
	hitungLuasLingkaran = PHI * (static_cast<double>(pow(jariJari,2)));
	cout << "Luas Lingkaran : " << hitungLuasLingkaran << endl;
	cout << "===================================================="<<endl;	
	
	
	cout << "===================================================="<<endl;
	cout <<endl;
	
	
	
	
	
	
	
	
	double volume, sisi;
	
	
	
	cout << "Masukkan Nilai Sisi Kubus : ";
	cin >> sisi;
	
	
	volume = pow(sisi,3);
	cout << "Volume Kubus : " << volume << endl;
	
}
