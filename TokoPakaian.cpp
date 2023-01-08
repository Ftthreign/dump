#include <iostream>
#include <unistd.h>

using namespace std;
unsigned int sleep(unsigned int seconds);


int main(){
	char gender, confirm, cbuy;
	int pilih, harga, nominal, banyak;
	double total;
	

	cout << " ======================================================= \n";
	cout << "|        Selamat datang di Toko PAKAILAH                |\n";
	cout << " ======================================================= \n";
	cout << endl;

	cout << "Apakah anda ingin melihat lihat terlebih dahulu Produk pakaiannya? Y/T: ";
	cin >> confirm;
	
	if (confirm == 'Y' || confirm == 'y'){
		cout << endl;
		cout << "                 PAKAIAN PRIA \n";
		cout << "________________________________________________\n";
		cout << "| Kode|         Jenis          |     Harga     |\n";
		cout << "|_____|________________________|_______________|\n";
		cout << "| 1   | Sweater                |   Rp  75.000  |\n";
		cout << "| 2   | Kemeja Polos           |   Rp  60.000  |\n";
		cout << "| 3   | Jeans                  |   Rp  90.000  |\n";
		cout << "| 4   | Crewneck               |   Rp  100.000 |\n";
		cout << "| 5   | Tuxedo                 |   Rp  200.000 |\n";
		cout << "================================================\n";
		cout << "\n";
		cout << "                 PAKAIAN WANITA \n";
		cout << "________________________________________________\n";
		cout << "| Kode|         Jenis          |     Harga     |\n";
		cout << "|_____|________________________|_______________|\n";
		cout << "| 1   | Cardigan               |    Rp  65.000 |\n";
		cout << "| 2   | Slip Dress             |    Rp  90.000 |\n";
		cout << "| 3   | Hijab                  |    Rp  50.000 |\n";
		cout << "| 4   | Blouse                 |    Rp  40.000 |\n";
		cout << "| 5   | Overall                |    Rp  75.000 |\n";
		cout << "================================================\n\n";
	}

	cout << "Apakah anda berminat untuk membeli? (Y/T) : ";
	cin >> cbuy;
	
	if (cbuy == 'Y' || cbuy == 'y'){
		

	cout << "Silahkan Konfirmasi jenis kelamin anda (P/W) : ";
	cin >> gender;
     } else {
     	cout << "Pergi lo bangsat";
     	return 0;
	 }
	
	do {
	
		if (gender == 'P' || gender == 'p'){
		cout << endl;
		cout << "                 PAKAIAN PRIA \n";
		cout << "________________________________________________\n";
		cout << "| Kode|         Jenis          |     Harga     |\n";
		cout << "|_____|________________________|_______________|\n";
		cout << "| 1   | Sweater                |   Rp  75.000  |\n";
		cout << "| 2   | Kemeja Polos           |   Rp  60.000  |\n";
		cout << "| 3   | Jeans                  |   Rp  90.000  |\n";
		cout << "| 4   | Crewneck               |   Rp  100.000 |\n";
		cout << "| 5   | Tuxedo                 |   Rp  200.000 |\n";
		cout << "================================================\n";

		cout << "Silahkan pilih nomor kode dari pakaian yang akan dibeli : ";
		cin >> pilih;
		switch(pilih){
			case 1 : 
				cout << "++++++++++++++++++++++++++\n";
				cout << "Jenis  : Sweater\n";
				cout << "Harga  : Rp 75.000\n";
				cout << "++++++++++++++++++++++++++\n";
			
				harga = 75000;
				cout << "Berapa yang anda beli? ";
				cin >> banyak;
				cout << "++++++++++++++++++++++++++\n";
				nominal = banyak * harga;
				total =  total + nominal;
				break;

			case 2 : 
				cout << "++++++++++++++++++++++++++\n";
				cout << "Jenis  : Kemeja Polos\n";
				cout << "Harga  : Rp 60.000\n";
				cout << "++++++++++++++++++++++++++\n";
			
				harga = 60000;
				cout << "Berapa yang anda beli? ";
				cin >> banyak;
				cout << "++++++++++++++++++++++++++\n";
				nominal = banyak * harga;
				total =  total + nominal;
				break;

			case 3 : 
				cout << "++++++++++++++++++++++++++\n";
				cout << "Jenis  : Jeans\n";
				cout << "Harga  : Rp 90.000\n";
				cout << "++++++++++++++++++++++++++\n";
			
				harga = 90000;
				cout << "Berapa yang anda beli? ";
				cin >> banyak;
				cout << "++++++++++++++++++++++++++\n";
				nominal = banyak * harga;
				total =  total + nominal;
				break;

			case 4 : 
				cout << "++++++++++++++++++++++++++\n";
				cout << "Jenis  : Crewneck\n";
				cout << "Harga  : Rp 100.000\n";
				cout << "++++++++++++++++++++++++++\n";
			
				harga = 100000;
				cout << "Berapa yang anda beli? ";
				cin >> banyak;
				cout << "++++++++++++++++++++++++++\n";
				nominal = banyak * harga;
				total =  total + nominal;
				break;

			case 5 : 
				cout << "++++++++++++++++++++++++++\n";
				cout << "Jenis  : Tuxedo\n";
				cout << "Harga  : Rp 200.000\n";
				cout << "++++++++++++++++++++++++++\n";
			
				harga = 200000;
				cout << "Berapa yang anda beli? ";
				cin >> banyak;
				cout << "++++++++++++++++++++++++++\n";
				nominal = banyak * harga;
				total =  total + nominal;
				break;
		
			default :
				cout << "Maaf Anda belum memasukkan kode\n";

		}
	}	else if (gender == 'W' || gender == 'w'){
			cout << "                 PAKAIAN WANITA \n";
			cout << "________________________________________________\n";
			cout << "| Kode|         Jenis          |     Harga     |\n";
			cout << "|_____|________________________|_______________|\n";
			cout << "| 1   | Cardigan               |    Rp  65.000 |\n";
			cout << "| 2   | Slip Dress             |    Rp  90.000 |\n";
			cout << "| 3   | Hijab                  |    Rp  50.000 |\n";
			cout << "| 4   | Blouse                 |    Rp  40.000 |\n";
			cout << "| 5   | Overall                |    Rp  75.000 |\n";
			cout << "================================================\n\n";

			cout << "Silahkan pilih nomor kode dari pakaian yang akan dibeli : ";
			cin >> pilih;

		switch(pilih){
			case 1 : 
				cout << "++++++++++++++++++++++++++\n";
				cout << "Jenis  : Cardigan\n";
				cout << "Harga  : Rp 65.000\n";
				cout << "++++++++++++++++++++++++++\n";
			
				harga = 65000;
				cout << "Berapa yang anda beli? ";
				cin >> banyak;
				cout << "++++++++++++++++++++++++++\n";
				nominal = banyak * harga;
				total =  total + nominal;
				break;

			case 2 : 
				cout << "++++++++++++++++++++++++++\n";
				cout << "Jenis  : Slip Dress\n";
				cout << "Harga  : Rp 90.000\n";
				cout << "++++++++++++++++++++++++++\n";
			
				harga = 90000;
				cout << "Berapa yang anda beli? ";
				cin >> banyak;
				cout << "++++++++++++++++++++++++++\n";
				nominal = banyak * harga;
				total =  total + nominal;
				break;

			case 3 : 
				cout << "++++++++++++++++++++++++++\n";
				cout << "Jenis  : Hijab\n";
				cout << "Harga  : Rp 50.000\n";
				cout << "++++++++++++++++++++++++++\n";
			
				harga = 50000;
				cout << "Berapa yang anda beli? ";
				cin >> banyak;
				cout << "++++++++++++++++++++++++++\n";
				nominal = banyak * harga;
				total =  total + nominal;
				break;

			case 4 : 
				cout << "++++++++++++++++++++++++++\n";
				cout << "Jenis  : Blouse\n";
				cout << "Harga  : Rp 40.000\n";
				cout << "++++++++++++++++++++++++++\n";
			
				harga = 40000;
				cout << "Berapa yang anda beli? ";
				cin >> banyak;
				cout << "++++++++++++++++++++++++++\n";
				nominal = banyak * harga;
				total =  total + nominal;
				break;

			case 5 : 
				cout << "++++++++++++++++++++++++++\n";
				cout << "Jenis  : Overall\n";
				cout << "Harga  : Rp 75.000\n";
				cout << "++++++++++++++++++++++++++\n";
			
				harga = 75000;
				cout << "Berapa yang anda beli? ";
				cin >> banyak;
				cout << "++++++++++++++++++++++++++\n";
				nominal = banyak * harga;
				total =  total + nominal;
				break;

			default : 
				cout << "Maaf anda belum memasukkan kode\n";

		}
	} else {
		cout << "Pastikan anda menginput jenis kelamin sesuai dengan format\n";
	}

	cout << "Apakah anda masih ingin membeli lagi? (Y/T) : ";
	cin >> cbuy;
} while (cbuy == 'Y' || cbuy == 'y');

	cout << endl << endl;
	cout << "Silahkan Tunggu Sebentar....." << endl;
	sleep(4);
	system("cls");
	cout << "========================================" <<endl;
	cout << "Total Belanjaan          = Rp "<< total   << endl;
	cout << "Pajak Anda Dikenakan Sebesar 10%"         << endl;
	cout << "Total yang Harus Dibayar = Rp "<< total + (total * 0.1) << endl;
	cout << "========================================" << endl;
	
	return 0;
}
