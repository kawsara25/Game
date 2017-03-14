#include "Card.h"



Card::Card()
{
}


Card::Card(string name, string col)
{
	cardName = name;
	cardColor = col;
	toString();
}
Card::Card(string name )//string col)
{
	cardName = name;
	//cardColor = col;
	// toString();
}


Card::~Card()
{
}

string Card::getCardName()
{
	return cardName;
}

string Card::getCardColor()
{
	return cardColor;
}

void Card::toString()
{
	//cardColor;
	cout << " Card  created with name : " + cardName + "  \n And color is:  " + cardColor << endl;

}