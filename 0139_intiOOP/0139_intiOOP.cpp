#include <iostream>
using namespace std;

class bangunDatar {
private:
	float panjang, lebar;
public:
	float luas;

	void input() {
		cout << "Masukan panjangnya = ";
		cin >> panjang;
		cout << "Masukan lebarnyanya = ";
		cin >> lebar;
	}

	float hitungluas() {
		return panjang * lebar;
	}

};
