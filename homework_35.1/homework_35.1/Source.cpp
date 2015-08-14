//Заполнить вектор длинной 10 квадратами целых чисел и вывести его в выходной поток.


#include <iostream>
#include <vector>
using namespace std;


void main() {
	vector<int> vect;
	vect.resize(10, 1);
	for (int i = 0; i<vect.size(); i++) {
		vect[i] = i*i;
		cout << vect[i] << '\t';
	}
}