//Card game Black Jack


#include <iostream>
#include <time.h>
using namespace std;


class Black_Jack {
private:


public:
	Black_Jack() {

	}
	~Black_Jack() { }
};



class Playing_Cards :public Black_Jack {
private:
	char suit;
	int rank;
public:
	Playing_Cards() {

	}
	~Playing_Cards() { }


};


class Player :public Black_Jack {
private:


public:
	Player() {


	}
	~Player() { }
};


class Gambling_Table :public Black_Jack {
private:


public:
	Gambling_Table() {


	}
	~Gambling_Table() { }
};


int main() {



	return 0;
}