//Создайте класс Время, в котором реализованы операции сложения, вычитания, 
//сравнения, ввода и вывод на экран.Возможность конвертации времени из американского формата 
//am(pm) : 10 : 00 pm = 22 : 00, 12 : 00 pm = 00 : 00

#include <iostream>
#include <time.h>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;
public:
	Time() {
		hour = 0;
		minute = 0;
		second = 0;
	}
	Time(int s) {
		hour = s / 3600;
		minute = (s % 3600) / 60;
		second = (s % 3600) % 60;
	}
	Time(int h, int m, int s) {
		hour = h;
		minute = m;
		second = s;
	}
	~Time() {
	}
	void Show() {
		cout << "Hour: " << hour << endl;
		cout << "Minute: " << minute << endl;
		cout << "Second: " << second << endl;
	}
	Time operator+(const Time &temp) {
		Time h;
		h.hour = hour + temp.hour;
		h.minute = minute + temp.minute;
		h.second = second + temp.second;
		return h;
	}
	Time operator-(const Time &temp) {
		Time h;
		h.hour = hour - temp.hour;
		h.minute = minute - temp.minute;
		h.second = second - temp.second;
		return h;
	}
	void clock_hour() {
		if (hour >= 12) {
			cout << "Current time in 12-hour-mode:\t" << hour - 12 << "pm:" << minute << ":" << second << endl;
		}
		else {
			cout << "Current time in 12-hour-mode:\t" << hour << "am:" << minute << ":" << second << endl;
		}
		cout << "Current time in 24-hour-mode:\t" << hour << ":" << minute << ":" << second << endl;
	}

};

int main() {
	Time a(17, 5, 33);//текущее время
	int hour, minute, second;
	cout << "Enter hour(0-23)" << endl;
	cin >> hour;
	cout << "Enter minute(0-60)" << endl;
	cin >> minute;
	cout << "Enter second(0-60)" << endl;
	cin >> second;
	Time b(hour, minute, second);//принимает ввод с клавиатуры
	Time c;
	a.Show();
	b.Show();
	cout << "\tAddition" << endl;
	c = a + b;
	c.Show();
	cout << "\tSubtraction" << endl;
	c = a - b;
	c.Show();
	a.clock_hour();
	return 0;
}