#include <iostream>
#include <fstream>
#include <windows.h>
#include <unistd.h>

using namespace std;
unsigned int sleep(unsigned int seconds);

int main()
{
	int umur;
	int jumlahTiket, nomorUrut;


	ofstream tiket;
	tiket.open("ticketing.txt");

	cout << "Masukkan Umur : ";
	cin >> umur;
	tiket << umur << endl;
	if (umur > 0 && umur <= 12)
	{
		tiket << "Lu itu anak anak";
	}

	else if (umur > 12 && umur <= 16)
	{
		tiket << "Lu itu remaja";
	}

	else if (umur >= 17)
	{
		tiket << "Lu itu udah dewasa";
	}

	else
	{
		tiket << "Masukkan Umur yang valid!!";
	}

	system(" START /MIN NOTEPAD ticketing.txt");
	tiket.close();

	return 0;
}
