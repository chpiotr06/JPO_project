#include <iostream>
#include <fstream>
#define missedShot "O"
#define accurateShot "X"
#define ownShip "#"

using namespace std;

class Points {
private:
	int _shot, _missed;
public:
	Points( int shot = 0, int missed = 0) { _missed = missed; _shot = shot;	}
	int getMissed() const { return _missed; }
	int getShot() const { return _shot;  }
	void incrementMissed() { _missed++; }
	void incrementShot() { _shot++;  }
	void restartPoints() { _shot = 0; _missed = 0; }
};

class Coordinates {
private:

public:

};

class GameBoard {
private:
public:
	GameBoard() {

	}
	void generateRandomBoard() {

	}
	bool takeGuess(Coordinates coords) {

	}
	void emptyBoard() {

	}
};

class Player {
private:
	Points _playerPoints;
	bool _hasTurn, _isWinner;
public:
};

int main() {
	

	return 0;
}