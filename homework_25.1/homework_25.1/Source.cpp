#include <iostream>
using namespace std;

class Complex {
	double re, im;
public:
	Complex() {
		re = 0, im = 0;
	}
	Complex(double a, double b) {
		re = a;
		im = b;
	}
	void show() {
		cout << "Real part: " << re << endl;
		cout << "Imaginary part: " << im << endl;
	}
	Complex operator+(const Complex &N) {
		Complex temp;
		temp.re = re + N.re;
		temp.im = im + N.im;
		return temp;
	}
	Complex operator-(const Complex &N) {
		Complex temp;
		temp.re = re - N.re;
		temp.im = im - N.im;
		return temp;
	}
	Complex operator*(const Complex &N) {
		Complex temp;
		temp.re = re * N.re - im * N.im;
		temp.im = re * N.im + im * N.re;

		return temp;
	}
	Complex operator/(const Complex &N) {
		Complex temp;
		temp.re = (re*N.re + im*N.im) / (pow(N.re, 2) + pow(N.im, 2));
		temp.im = (im*N.re - re*N.im) / (pow(N.re, 2) + pow(N.im, 2));
		return temp;
	}
};

void main() {
	Complex Z1, Z2, Z3, Z4, Z5, Z6;
	Z1 = { 3, 4 };
	Z2 = { 8, 6 };
	Z3 = Z1 + Z2;
	Z4 = Z1 - Z2;
	Z5 = Z1 * Z2;
	Z6 = Z1 / Z2;
	Z1.show();
	Z2.show();
	cout << "\n\tStructure of Z1 and Z2" << endl;
	Z3.show();
	cout << "\n\tDiminution of Z1 and Z2" << endl;
	Z4.show();
	cout << "\n\tStructure of Z1 and Z2" << endl;
	Z5.show();
	cout << "\n\tCleavage of Z1 and Z2" << endl;
	Z6.show();
}