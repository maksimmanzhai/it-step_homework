//��������� ���������� ������ �������� ��������� � �������� ��� � �������� �����.

#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main(){
	/*for (int i = 2; i <= 9; ++i) {
		for (int j = 2; j <= 9; ++j) {
			cout << j << "*" << i << "=" << j*i << "\t";
		}
		cout << "\n";
	}*/

	// ������� �����������
	map <int, int> our_map;

	// ������� ������
	vector <int> our_vector;

	// ������������ ������ �������
	cout << "\n\nmax size of vector --> " << our_vector.max_size() / sizeof(int);

	// ������������ ������ ����������� (� ��� ���� ������ �.�. ��� ������� �������� 
	// ����� ������� ��� �������� - ����).
	cout << "\n\nmax size of map --> " << our_map.max_size() / sizeof(int);

	cout << "\n\n-------------------------------------------------------------\n";

	int val;
	int key;

	cout << "\nInput value : ";
	cin >> val;

	cout << "\nInput key : ";
	cin >> key;

	// ������� ���� �� ��������� ���� ��������.
	pair<int, int> element(key, val);

	// ��������� ���� � �����������
	our_map.insert(element);

	// ���-�� ��������� � �����������
	cout << "\nCurrent element of map --> " << our_map.size() << endl;

	cout << "\n-------------------------------------------------------------\n";

	cout << "\nInput value : ";
	cin >> val;

	cout << "\nInput key : ";
	cin >> key;

	pair<map<int, int>::iterator, bool> err = our_map.insert(make_pair(key, val));

	if (err.second == false)
	{
		// ���������� � ������ ���� � ����������� �� ���������� �������� �������
		// �������� ���� � ����������� ��� ��� ������� � ������ ������.
		cout << "\nError !!!\n";
	}
	// ���-�� ��������� � �����������
	cout << "\nCurrent element of map --> " << our_map.size() << endl;

	// ����� ���� ��������� �� �����
	map<int, int>::iterator iter = our_map.begin();
	for (; iter != our_map.end(); iter++)
	{
		cout << "\nKey --> " << iter->first << "\t\tValue --> " << iter->second;
	}
	cout << "\n-------------------------------------------------------------\n";


	return 0;
}