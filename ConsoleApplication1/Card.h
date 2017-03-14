#pragma once
#include <string>
#include <iostream>
using namespace std;
class Card
{
public:
	enum COLOR { RED, BLUE, GREEN, WHITE, BLACK };
	Card();
	Card(string a);//string b);
	Card::Card(string name, string col);
	~Card();
	string getCardName();
	string getCardColor();
	virtual void toString();


private:
	string cardName;
	string cardColor;
};

 