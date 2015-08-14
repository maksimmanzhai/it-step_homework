#include <iostream>
#include <string.h>
using namespace std;

class Employer {
public:
	char Title[20];
	Employer(char *t) {
		strcpy(Title, t);
	}
	virtual void Print() = 0;
};

class President : public Employer {
public:
	President(char *Title) : Employer(Title) {};
	virtual void Print() {
		cout << Title << " is the leader of a country or a company or other group." << endl;;
	}
};

class Manager : public Employer {
public:
	Manager(char *Title) : Employer(Title) {};
	virtual void Print() {
		cout << Title << " can control departments in companies, or guide the people who work for them." << endl;
	}
};

class Worker : public Employer {
public:
	Worker(char *Title) : Employer(Title) {};
	virtual void Print() {
		cout << Title << " is a person who works" << endl;
	}
};

void main() {
	Employer *Employer[3] = {
		new President("President"),
		new Manager("Manager"),
		new Worker("Worker") };
	for (int k = 0; k<3; k++)
		Employer[k]->Print();
}