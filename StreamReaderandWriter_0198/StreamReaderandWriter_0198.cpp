#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main()
{
	//untuk menyimoan data berbentuk string
	string baris; 

	//membuka file dalam mode menulis
	ofstream outfile; 

	//menunjuk kesebuah nama file
	outfile.open("contohfile.txt"); 

	cout << ">= menulis file, \'q\' untuk keluar " << endl;

	//unlimited loop untuk menulis
	while (true) {
		cout << "_ ";
		//mendapatkan setiap karakter dalam satu baris
		getline(cin, baris);
		//loop akan berhenti jika anda memasukkan karakter q
		if (baris == "q") break;
		//menulis dan memasukkan nilai dari 'baris' ke dalam file
		outfile << baris << endl;

	}
	//selesai dalam menulis sekrang tutup filenya
	outfile.close();

	//menunjuk ke sebuah file
	ifstream infile;
	infile.open("contohfile.txt");

	cout << endl << ">= Membuka dan membaca file " << endl;
	//jika file ada maka
	if (infile.is_open()) {
		//melakukan perulangan setiap baris
		while (getline(infile, baris)) {
			//menampilkan isi data array
			cout << baris << '\n';
		}
		//menutup file setelah selesai
		infile.close();
	}
	//jika tidak ada file akan menampilkan berikut ini
	else cout << "unable to open file ";
	return 0;
}
