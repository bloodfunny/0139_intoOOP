#include <iostream>
using namespace std;

class mahasiswa {
public:
	string nama;
	int umur;
	string jurusan;

	void output() {
		cout << "nama: " << nama << endl;
		cout << "umur: " << umur << endl;
		cout << "jurusan: " << jurusan << endl;
	}

};

class matakuliah {
private:
	string kodeMk;
	string namaMk;
	int sks;
public:
	void input() {
		cout << "Kode Mk: ";
		cin >> kodeMk;
		cout << "Nama Mk: ";
		cin >> namaMk;
		cout << "sks: ";
		cin >> sks;
	}

	void output() {
		cout << "kode Mk: " << kodeMk << endl;
		cout << "nama Mk: " << namaMk << endl;
		cout << "sks: " << sks << endl;
	}
};

int main() {

}