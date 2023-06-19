#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	//membuka file dalam bentuk menulis
	ofstream outfile;
	//menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q\' untuk keluar" << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "- ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan huruf q
		if (baris == "q") break;
		//menulis dan memasukan nilai dari 'baris' ke dalam file
		outfile << baris << endl;
	}
	//selesai dalam menulis sekarang tutup filenya
	outfile.close();

	//menambahkan file dalam mode baca
	ifstream infile;
}