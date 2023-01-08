#include <iostream>
using namespace std;

void hasil(float Nilai){
	
	if(Nilai>=76){
		cout<<"Nilai = A";}
	else if (Nilai>=71 && Nilai<76){
		cout<<"Nilai = B+";}
	else if (Nilai>=66 && Nilai<71){
		cout<<"Nilai = B";}
	else if (Nilai>=61 && Nilai<66){
		cout<<"Nilai = C+";}
	else if (Nilai>=56 && Nilai<61){
		cout<<"Nilai = C";}
	else if (Nilai>=51 && Nilai<56){
		cout<<"Nilai = D";}
	else if (Nilai>=0 && Nilai<51){
		cout<<"Nilai = E";}
}

int main(){
	float Nilai;
	
	for (int i = 0; i <= 38; i++){
		cout << "Masukkan Nilai :";
		cin >> Nilai;
		hasil(Nilai);
		cout << endl;
	}
	
	return 0;
}


