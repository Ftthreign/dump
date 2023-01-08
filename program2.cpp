#include <iostream>

using namespace std;

main(){
	
	
	int detik, menit, jam, sisaJam;
	
	
	cout << "Masukkan waktu dalam detik : ";cin>>detik;cout<<endl;
	
	
	jam=detik/3600;
	
	
	sisaJam=detik%3600;
	
	
	menit=sisaJam/60;
	
	
	detik = sisaJam%60;
	
	
	cout << "Waktu tersebut setara dengan "<<jam<<" Jam, "<<menit<<" Menit, "<<detik<<" detik"<<endl;
}
