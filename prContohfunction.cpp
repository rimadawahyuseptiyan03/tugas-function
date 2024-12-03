#include <iostream>
#include <cmath>

using namespace std;
void persegi(int sisi) {
	int luas = sisi * sisi;
	int Keliling = 4 * sisi;
	cout << "luas persegi = " << luas << "\n";
	cout << "Keliling persegi = " << Keliling << "\n";

}

void persegipanjang(int panjang, int lebar) {
	int luas = panjang*lebar;
	int Keliling = 2*(panjang+lebar);
	cout << "luas persegi panjang = " << luas << "\n";
	cout << "Keliling persegi panjang = " << Keliling << "\n";

}

void segitiga(double alas, double tinggi) {
	double miring = sqrt(alas * alas + tinggi * tinggi);
	double luas = 0.5*alas*tinggi;
	double Keliling = alas + tinggi + miring;
	cout << "luas segitiga = " << luas << "\n";
	cout << "Keliling segitiga = " << Keliling << "\n";
}
 
void lingkaran(double jarijari) {
	double luas = 3.14*jarijari*jarijari;
	double Keliling = 3.14*2*jarijari;
	cout << "luas lingkaran = " << luas << "\n";
	cout << "Keliling lingkaran = " << Keliling << "\n";
}

void main() { 
	int input;
	int panjang, lebar, sisi;
	double alas, tinggi, jarijari;
	cout << " pilih nama bangun datar !" << endl;
	cout << " 1. persegi " << endl;
	cout << " 2. persegi panjang " << endl;
	cout << " 3. segitiga " << endl;
	cout << " 4. lingkaran " << endl;
	cout << "pilih (1/2/3/4) = ";
	cin >> input;
	if (input == 1) { 
		int input;
		cout << "Masukkan panjang sisi = ";
		cin >> input;
		persegi(input); }
	else if(input == 2) { 
		cout << "Masukkan panjang = ";
		cin >> panjang;
		cout << "Masukkan lebar = ";
		cin >> lebar;
		persegipanjang(panjang,lebar); }
	else if (input == 3) {
		cout << "Masukkan alas = ";
		cin >> alas;
		cout << "Masukkan tinggi = ";
		cin >> tinggi;
		segitiga(alas,tinggi); }
	else if (input == 4) {
		cout << "Masukkan jari-jari = ";
		cin >> jarijari;
		lingkaran(jarijari); }
	else { cout << "data tidak valid"; }







}