#include <iostream>
#include <fstream>
#include <unistd.h>

unsigned int sleep(unsigned int seconds);
using namespace std;

ofstream tiket; // deklarasi variabel objek global

// prosedur untuk menuliskan judul pada file txt
void header()
{
	tiket << "===============================================" << endl;
	tiket << "	   SELAMAT DATANG DI BIOSKOP CEKIWIR		" << endl;
	tiket << "	SEMOGA ANDA NYAMAN DENGAN PELAYANAN KAMI	" << endl;
	tiket << "===============================================" << endl;
}

// prosedur untuk menampilkan list film pada terminal
void judulFilm()
{
	int umur;

	cout << "Masukkan umur : ";
	cin >> umur;
	cout << endl;
	tiket << "Umur Pemesan adalah : ";
	tiket << umur;
	tiket << endl;

	if (umur >= 0 && umur <= 12)
	{
		cout << "Anda termasuk dalam kategori ANAK-ANAK" << endl;
		sleep(2);
		tiket << "Anda termasuk dalam kategori ANAK-ANAK" << endl;
		cout << "Film yang dapat dipilih : " << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;
		cout << "|                                                                                            |" << endl;
		cout << "|                                         NOW AIRING                                         |" << endl;
		cout << "|                                                                                            |" << endl;
		cout << "|                                   1. UP!                                                   |" << endl;
		cout << "|                                   2. Smurfs: The Lost Village                              |" << endl;
		cout << "|                                                                                            |" << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;
	}
	else if (umur >= 13 && umur <= 16)
	{
		cout << "Anda termasuk dalam kategori REMAJA" << endl;
		sleep(2);
		tiket << "Anda termasuk dalam kategori REMAJA" << endl;
		cout << "Film yang dapat dipilih : " << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;
		cout << "|                                                                                            |" << endl;
		cout << "|                                         NOW AIRING                                         |" << endl;
		cout << "|                                                                                            |" << endl;
		cout << "|                                   1. UP!                                                   |" << endl;
		cout << "|                                   2. Smurf: The Lost VIllege                               |" << endl;
		cout << "|                                   3. Forrest Gump                                          |" << endl;
		cout << "|                                   4. Hacksaw Ridge                                         |" << endl;
		cout << "|                                   5. Black Panther                                         |" << endl;
		cout << "|                                                                                            |" << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;
	}
	else if (umur >= 17)
	{
		cout << "Anda termasuk dalam kategori DEWASA" << endl;
		sleep(2);
		tiket << "Anda termasuk dalam kategori DEWASA" << endl;
		cout << "Film yang dapat dipilih : " << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;
		cout << "|                                                                                            |" << endl;
		cout << "|                                         NOW AIRING                                         |" << endl;
		cout << "|                                                                                            |" << endl;
		cout << "|                                   1. UP!                                                   |" << endl;
		cout << "|                                   2. Smurf: The Lost VIllege                               |" << endl;
		cout << "|                                   3. Forrest Gump                                          |" << endl;
		cout << "|                                   4. Hacksaw Ridge                                         |" << endl;
		cout << "|                                   5. Black Panther                                         |" << endl;
		cout << "|                                   6. The Greatest Showman                                  |" << endl;
		cout << "|                                   7. Habibie and Ainun                                     |" << endl;
		cout << "|                                                                                            |" << endl;
		cout << "----------------------------------------------------------------------------------------------" << endl;
	}
}

void film1()
{
	cout << "Film yang anda pilih adalah ";
	cout << "UP!" << endl;
	cout << "Harga Rp.35000" << endl;
	cout << endl;

	cout << "Jadwal Penayangan film" << endl;
	cout << "10.00	||	13.00 " << endl;
	cout << "17.00	||	20.00 " << endl;
}

void film2()
{
	cout << "Film yang anda pilih adalah ";
	cout << "Smurf: The Lost VIllege" << endl;
	cout << "Harga Rp.35000" << endl;
	cout << endl;

	cout << "Jadwal Penayangan film" << endl;
	cout << "10.00	||	13.00 " << endl;
	cout << "17.00	||	20.00 " << endl;
}

void film3()
{
	cout << "Film yang anda pilih adalah ";
	cout << "Forrest Gump" << endl;
	cout << "Harga Rp.40000" << endl;
	cout << endl;

	cout << "Jadwal Penayangan film" << endl;
	cout << "10.00	||	13.00 " << endl;
	cout << "17.00	||	20.00 " << endl;
}

void film4()
{
	cout << "Film yang anda pilih adalah ";
	cout << "Hacksaw Ridge" << endl;
	cout << "Harga Rp.42000" << endl;
	cout << endl;

	cout << "Jadwal Penayangan film" << endl;
	cout << "10.00	||	13.00 " << endl;
	cout << "17.00	||	20.00 " << endl;
}

void film5()
{
	cout << "Film yang anda pilih adalah ";
	cout << "Black Panther" << endl;
	cout << "Harga Rp.45000" << endl;
	cout << endl;

	cout << "Jadwal Penayangan film" << endl;
	cout << "10.00	||	13.00 " << endl;
	cout << "17.00	||	20.00 " << endl;
}

void film6()
{
	cout << "Film yang anda pilih adalah ";
	cout << "The Greatest Showman" << endl;
	cout << "Harga Rp.50000" << endl;
	cout << endl;

	cout << "Jadwal Penayangan film" << endl;
	cout << "10.00	||	13.00 " << endl;
	cout << "17.00	||	20.00 " << endl;
}

void film7()
{
	cout << "Film yang anda pilih adalah ";
	cout << "Habibie and Ainun" << endl;
	cout << "Harga Rp.55000" << endl;
	cout << endl;

	cout << "Jadwal Penayangan film" << endl;
	cout << "10.00	||	13.00 " << endl;
	cout << "17.00	||	20.00 " << endl;
}

int main()
{
	int umur, nomor;
	int harga, bayar, uang, kembalian;
	float jam;
	string nama_pengunjung, nomorKursi;
	int jumlah_pengunjung;

	tiket.open("ticketing.txt"); // membuka file txt yang akan diakses

	header();	 // memanggil prosedur untuk menampilkan tampilan judul pada tiket di file txt
	judulFilm(); // memanggil prosedur untuk menampilkan input dan output umur dan judul film sesuai tipe
	sleep(2);
	cout << "Masukkan jumlah pengunjung : ";
	cin >> jumlah_pengunjung;

	tiket << "Jumlah tiket yang dipesan sebanyak : " << jumlah_pengunjung << endl;

	for (int i = 1; i <= jumlah_pengunjung; i++)
	{
		cout << "Masukkan nama pengunjung : ";
		cin >> nama_pengunjung;
		cout << "Masukkan nomor kursi : ";
		cin >> nomorKursi;

		tiket << endl;
		tiket << "===========================================================" << endl;
		tiket << "Pengunjung ke-" << i << " Adalah " << nama_pengunjung << endl;
		tiket << "ANDA DAPAT DUDUK DI KURSI NOMOR : " << nomorKursi << endl;
		tiket << "===========================================================" << endl;
	}

	cout << "MASUKKAN KODE FILM : ";
	cin >> nomor;
	switch (nomor)
	{
	case 1:
		film1();
		harga = 35000;
		bayar = harga * jumlah_pengunjung;
		cout << "Masukkan Jam yang dipilih: ";
		cin >> jam;
		tiket << "Jam yang dipilih adalah " << jam << endl;
		tiket << "Total pembayaran anda adalah : ";
		tiket << bayar;
		tiket << endl;
		cout << "bayar : ";
		cout << bayar;
		break;
	case 2:
		film2();
		harga = 35000;
		bayar = harga * jumlah_pengunjung;
		cout << "Masukkan Jam yang dipilih: ";
		cin >> jam;
		tiket << endl;
		tiket << "Jam yang dipilih adalah " << jam << endl;
		tiket << "Total pembayaran anda adalah : ";
		tiket << bayar;
		tiket << endl;
		cout << "bayar : ";
		cout << bayar;
		break;
	case 3:
		film3();
		harga = 40000;
		bayar = harga * jumlah_pengunjung;
		cout << "Masukkan Jam yang dipilih: ";
		cin >> jam;
		tiket << endl;
		tiket << "Jam yang dipilih adalah " << jam << endl;
		tiket << "Total pembayaran anda adalah : ";
		tiket << bayar;
		tiket << endl;
		cout << "bayar : ";
		cout << bayar;
		break;
	case 4:
		film4();
		harga = 42000;
		bayar = harga * jumlah_pengunjung;
		cout << "Masukkan Jam yang dipilih: ";
		cin >> jam;
		tiket << "Jam yang dipilih adalah " << jam << endl;
		tiket << "Total pembayaran anda adalah : ";
		tiket << bayar;
		tiket << endl;
		cout << "bayar : ";
		cout << bayar;
		break;
	case 5:
		film5();
		harga = 45000;
		bayar = harga * jumlah_pengunjung;
		cout << "Masukkan Jam yang dipilih: ";
		cin >> jam;
		tiket << endl;
		tiket << "Jam yang dipilih adalah " << jam << endl;
		tiket << "Total pembayaran anda adalah : ";
		tiket << bayar;
		tiket << endl;
		cout << "bayar : ";
		cout << bayar;
		break;
	case 6:
		film6();
		harga = 50000;
		bayar = harga * jumlah_pengunjung;
		cout << "Masukkan Jam yang dipilih: ";
		cin >> jam;
		tiket << endl;
		tiket << "Jam yang dipilih adalah " << jam << endl;
		tiket << "Total pembayaran anda adalah : ";
		tiket << bayar;
		tiket << endl;
		cout << "bayar : ";
		cout << bayar;
		break;
	case 7:
		film7();
		harga = 55000;
		bayar = harga * jumlah_pengunjung;
		cout << "Masukkan Jam yang dipilih: ";
		cin >> jam;
		tiket << endl;
		tiket << "Jam yang dipilih adalah " << jam << endl;
		tiket << "Total pembayaran anda adalah : " << endl;
		tiket << bayar;
		tiket << endl;
		cout << "bayar : ";
		cout << bayar;
		break;
	}

	cout << endl;
	cout << "Masukkan uang yang anda punya : ";
	cin >> uang;

	kembalian = uang - bayar;

	if (kembalian == 0)
	{
		cout << "Anda Membayar uang pas tanpa ada kembalian";
		tiket << "Anda Membayar uang pas tanpa ada kembalian" << endl;
	}
	else if (kembalian > 0)
	{
		cout << "Anda memiliki kembalian sebesar : " << kembalian;
		tiket << "Anda memiliki kembalian sebesar : " << kembalian << endl;
	}
	else if (kembalian < 0)
	{
		cout << "Maaf, uang anda tidak cukup untuk melakukan pembayaran";
		tiket << "Maaf, uang anda tidak cukup untuk melakukan pembayaran" << endl;
	}

	tiket << endl;
	tiket << endl;
	tiket << endl;
	tiket << "TERIMAKASIH TELAH MELAKUKAN PENGISIAN DATA ^_^" << endl;

	tiket.close();
	system(" START /MIN NOTEPAD ticketing.txt");

	return 0;
}
