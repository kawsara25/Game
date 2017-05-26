#include "City.h"



City::City() :Card("Atlanta")
{

	//myCities.push_back(City("Atlanta", "black"));
}
City::City(string nam) : Card(nam)
{
	//myCities.push_back(City("Atlanta", "black"));
}// hello


City::~City()
{

}
//void City::addPlayerToCity(Player player)
//{
	//playerInCity.push_back(player);
//}

void City::toString()
{
	//cardColor;
	cout << " City Card: " + getCardName() <<"  ";// +"  \n And color is: " + cardColor;
	
	cout << "List of players in city :" ;
}

/*void City::addLink(City & v, City & y)
{
Link nextLink(v, y);
links.push_back(nextLink);
}

void City::toShowLink()
{
	cout << getCardName() << endl;
	//for (int i = 0; i < links.size(); i++)
	{


		//	cout <<links[1].getStop<< endl;
	}
	cout << endl;

}


*/
