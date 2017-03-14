#include <iostream>;
#include "Character.h"
#include <string>

using namespace std;

int main() {

	pawn pa1 = pawn("blue", "Atlanta");
	pawn pa2 = pawn("red", "Atlanta");
	refCard re1 = refCard();
	refCard re2 = refCard();
	roleCard ro1 = roleCard("Medic");
	roleCard ro2 = roleCard("Researcher");

	player p1 = player(re1, pa1, ro1);
	player p2 = player(re2, pa2, ro2);

	cout << p1.toString() << endl;
	cout << p2.toString() << endl;

	return 0;
};

