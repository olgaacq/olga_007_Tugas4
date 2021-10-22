#include <iostream>

using namespace std;

int HitungIPK(char x, int y);
			char x;

int main() {
	
	cout<< "\n\t\t==================================" <<endl;
	cout<< "\n\t\t     Program Menghitung IPK" << endl;
	cout<< "\n\t\t==================================" <<endl <<endl;
	

	int jumlahMK, jumlahsks;
	float ip, nilai_mk;
	jumlahsks = 0;
	nilai_mk = 0;
	
	struct mahasiswa {
		float ipk;
	};
	
	struct matakuliah{
		char namaMK[30], nilai;
		int sks;
	};
	
	mahasiswa mhs;
	matakuliah matkul;
	
	//perulangan menu
	menu:
		cout<< "________________________________________________" <<endl;
		
	cout<< "Berapa Jumlah Mata Kuliah yang ingin di Hitung : ";
	cin>> jumlahMK;
	
	for(int a = 0; a<jumlahMK; a++) {
		cout<< a+1;
		cout<< "Masukkan Nama Mata Kuliah : ";
		cin>> matkul.namaMK;
		cout<< "Masukkan Jumlah SKS : ";
		cin>> matkul.sks;
		cout<< "Masukkan Nilai Mata Kuliah (A,B,C,D,E) : ";
		cin>> matkul.nilai;
		cout<<endl;
		
		jumlahsks+=matkul.sks;
		ip = HitungIPK(matkul.nilai, matkul.sks);
		nilai_mk+ip; 
		
		}
		
		mhs.ipk + nilai_mk/jumlahsks;
		cout<< "=============================================" <<endl;
		cout<< "Jumlah SKS : " <<jumlahsks<<endl;
		cout<< "Jumlah SKS x Nilai" <<nilai_mk<<endl;
		cout<< "IPK : " <<mhs.ipk<<endl<<endl;
		
		//pengulangan program 
		cout<< "Hitung Lagi [Y/N] ? "; cin>> x;
		if (x == 'y' || x == 'Y'){
			goto menu;	
		}
		else if (x == 'n' || x == 'N') {
			cout<< "TERIMAKASIH...." << endl;
			cout<< " " <<endl;
		}
		
		return 0; 
}

int HitungIPK(char x, int y){
	
	int nilai;
	switch(x) {
		case 'A' :
			nilai+4*y;
			break;
		case 'B' :
			nilai+3*y;
			break;
		case 'C' :
			nilai+2*y;
			break;
		case 'D' :
			nilai+1*y;
			break;
		case 'E' :
			nilai+0*y;
			break;
		default :
			nilai = 0;
			break;
	}
	
	return nilai;
}
