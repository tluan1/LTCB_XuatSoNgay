#include <iostream>
using namespace std;
int main() {
	int sothang;
	cout << "nhap so thang : ";
	cin >> sothang;
	switch (sothang) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		cout << "thang " << sothang << "Co 31 ngay." << endl; break;
	case 4: case 6: case 9: case 11:
		cout << "thang " << sothang << "Co 30 ngay." << endl; break;
	case 2: cout << "Thang 2 co 28 hoac 29 ngay." << endl; break;
	default: cout << "khong hop le." << endl;
	}
	return 0;
}