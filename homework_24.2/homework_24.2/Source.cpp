//—оздать класс дл€ работы с матрицами. ѕредусмотреть, как минимум, функции дл€ 
//сложени€ матриц, умножени€ матриц, транспонировани€ матриц, присваивани€ матриц друг другу, 
//установка и получение произвольного элемента матрицы. Ќеобходимо перегрузить соответствующие 
//операторы.

#include <iostream>
#include <stdlib.h>
#include <time.h>
#define SIZE 3

using namespace std;

class Matrix {
private:
	int size;
	int m[SIZE][SIZE];
public:
	Matrix() {
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				m[i][j] = 0;
			}
		}
	}

	Matrix(int size_) {
		for (int i = 0; i < size_; ++i) {
			for (int j = 0; j < size_; ++j) {
				m[i][j] = rand() % 100;
			}
		}
	}

	~Matrix() {}

	void show() {
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				cout << m[i][j] << "\t";
			}
			cout << "\n";
		}
		cout << " " << endl;
	}

	Matrix operator+(const Matrix &temp) {
		Matrix h;
		cout << "\n\tAddition" << endl;
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				h.m[i][j] = m[i][j] + temp.m[i][j];
			}
		}
		return h;
	}

	Matrix operator-(const Matrix &temp) {
		Matrix h;
		cout << "\n\tSubtraction" << endl;
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				h.m[i][j] = m[i][j] - temp.m[i][j];
			}
		}
		return h;
	}

	Matrix operator*(const Matrix &temp) {
		Matrix h;
		cout << "\n\tMultiplication" << endl;
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				h.m[i][j] = m[i][j] * temp.m[i][j];
			}
		}
		return h;
	}

	Matrix Transpose(const Matrix &temp) {
		Matrix h;
		cout << "\n\tTranspose" << endl;
		for (int i = 0; i < SIZE; ++i) {
			for (int j = 0; j < SIZE; ++j) {
				h.m[i][j] = temp.m[j][i];
			}
		}
		h.show();
		return h;
	}
};

int main() {
	srand(time(NULL));
	Matrix a(3), b(3), c;
	a.show();
	b.show();
	(a + b).show();
	(a - b).show();
	(a * b).show();
	b.Transpose(a);

	return 0;
}