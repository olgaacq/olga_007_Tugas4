#include <iostream>
using namespace std;

int main() {
	
	//deklarasi variabel
	int i, jumlah, total, harga = 0, hargaa, diskon, potongan;
	string nama;
	char x;
	
	cout<< "\t\t\tPROGRAM MENGHITUNG TOTAL PENJUALAN\n\n\n";
	
		
	//inputan user
	cout<< "Masukkan Jumlah Barang = "; cin>> jumlah;
	cout<< endl;
	
	//perulangan barang
	for(i=1; i<=jumlah; i++) {
		cout<< "Harga Barang Ke- " << i << ": "; cin >> hargaa;
		harga = harga+hargaa;
	}
	
	//logika program
	if(harga > 500) {
		diskon = harga - (harga*10/100);
	}
	else if(harga >= 200 && harga <= 500) {
	}
	else {
		diskon = harga;
	}
	
	//besar harga diskon
	potongan = harga-diskon;
	
	//tampilkan output
	cout<< endl;
	cout<< "======================================================" << endl;
	cout<< "Total Harga \t : Rp. " << harga << endl;
	cout<< "Diskon \t\t : Rp. " << potongan << endl;
	cout<< "Harga Diskon \t : Rp. " << diskon << endl;
	
	cout<< endl;
	
	//perulangan program 
	cout<< "Hitung Lagi [Y/N] ? ";cin>> x;
	if (x == 'y' || x == 'Y') {
	}
	else if (x == 'N' || x == 'n'){
		cout<< "Terima Kasih..." << endl;
		cout<< " " <<endl;
	}
	
	return 0;
}
