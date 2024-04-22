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

	void display() {
		cout << "Panjangnya = " << panjang << endl;
		cout << "Lebarnya = " << lebar << endl;
		cout << "Luasnya = " << hitungluas() << endl;
	}
};

int main() {
	bangunDatar pp;
	pp.input();
	pp.display();

	return 0;
}