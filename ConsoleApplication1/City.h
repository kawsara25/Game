#pragma once
#include "Card.h"
//#include "Player.h"
#include <vector>

class City : public Card
{
public:
	City();
	void toString();
	//void addPlayerToCity(Player);
	~City();
	City(string s) {
		name = s;
		infCubes = 0;
	}
	int addInfCubes(){
		return infCubes++;
	}
	void toShowLink();
private:
	int infCubes;
	string name;
//	vector <Player> playerInCity;
	//vector <int> links;
};

