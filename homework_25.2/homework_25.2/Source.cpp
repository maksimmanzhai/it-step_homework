//Card game Black Jack

#include <iostream>
#include <ostream>
#include <time.h>

using namespace std;

struct Cards {
	char suit;
	char rank;
	int points;
};

class Black_Jack_game {
private:
public:
	Black_Jack_game() {

	}
	~Black_Jack_game() { }
};

class Playing_Cards :public Black_Jack_game {
private:
	int points;
	Cards cards[4][9];
public:
	Playing_Cards() {
		Cards cards[2][9] = { { '6','7','8', '9', '10', 'J', 'Q', 'K', 'A' }, { 6, 7, 8, 9, 10, 2, 3, 4, 11 } };
		
	}
	~Playing_Cards() { }

};

class Hand :public Black_Jack_game {
private:



public:
	Hand() {

	}
	~Hand() { }

};

class Gambling_Table :public Black_Jack_game {
private:

public:
	Gambling_Table() {

	}
	~Gambling_Table() { }
};

int main() {
	Playing_Cards a;
	


	return 0;
}