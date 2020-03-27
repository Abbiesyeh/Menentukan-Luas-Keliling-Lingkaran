//Menentukan-Luas-Keliling-Lingkaran
//tugas petruk 2

# include <iostream>
using namespace std ;

float phi = 3.14;
	float *Pphi = &phi;
void Lingkaran (int *ptrnilai) {

	cout<<"Masukkan jari-jari = ";
	cin>>*ptrnilai;
	
	cout << "Luas Lingkaran = " << *Pphi * *ptrnilai * *ptrnilai <<endl ;
	cout << "Keliling Lingkaran = " << 2 * *Pphi * *ptrnilai ;
	}
