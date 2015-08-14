//Написать программу, которая использует класс string для анализа строки, 
//содержащей математическое выражение, например, вида - (2 + 3) * 4 + 1. 
//Строка вводится с клавиатуры.
//Программа выдает результат вычисления выражения.

#include <iostream>
#include <windows.h>
#include <conio.h>
#include <cstring>

using namespace std;
const int LEN = 80;
const int MAX = 40;

class Stack {
private:
	char st[MAX];
	int top;
public:
	Stack() {
		top = 0;
	}
	void push(char var) {
		st[++top] = var;
	}
	char pop() {
		return st[--top];
	}
	int gettop() {
		return top;
	}
};

class String {
private:
	Stack s;
	char* pStr;
	int Len;
public:
	String(char* ptr) {
		pStr = ptr;
		Len = strlen(pStr);
	}
	void parse();
	int solve();
};

void String::parse() {
	char ch;
	char lastval;
	char lastop;
	for (int j = 0; j < Len; ++j) {
		ch = pStr[j];
		if (ch >= '0' && ch <= '9') {
			s.push(ch - '0');
		}
		else
			if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
				if (s.gettop() == 1)
					s.push(ch);
				else {
					lastval = s.pop();
					lastop = s.pop();
					if ((ch == '*' || ch == '/') && (lastop == '+' || lastop == '-')) {
						s.push(lastop);
						s.push(lastval);
					}
					else {
						switch (lastop) {
						case '+': s.push(s.pop() + lastval); break;
						case '-': s.push(s.pop() - lastval); break;
						case '*': s.push(s.pop() * lastval); break;
						case '/': s.push(s.pop() / lastval); break;
						}
					}
					s.push(ch);
				}
			}
			else {
				exit(1);
			}
	}
}

int String::solve() {
	char lastval;
	while (s.gettop() > 1) {
		lastval = s.pop();
		switch (s.pop()) {
		case '+': s.push(s.pop() + lastval); break;
		case '-': s.push(s.pop() - lastval); break;
		case '*': s.push(s.pop() * lastval); break;
		case '/': s.push(s.pop() / lastval); break;
		default: exit(1);
		}
	}
	return int(s.pop());
}

int main() {
	char ans;
	char string[LEN];
	cout << "\nEnter arithmetical expression type of 2+3*7/2'" << endl;
	do {

		cin >> string;
		String* eptr = new String(string);
		eptr->parse();
		cout << "\nFact : " << eptr->solve() << endl;;
		delete eptr;
		cout << "\nAny more expression (y/n)? " << endl;
		cin >> ans;
	} while (ans == 'd');
	getch();
	return 0;
}