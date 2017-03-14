#include <iostream>
#include "Character.h"
#include "Map.h"
#include <string>
#include "Graph.h"

using namespace std;

void createMap(){

	Graph myGraph;
	City c[48];
	//blue
	c[0] = City("Atlanta");
	c[1] = City("San Srancisco");
	c[2] = City("Chicago");
	c[3] = City("Montreal");
	c[4] = City("Washington");
	c[5] = City("New York");
	c[6] = City("London");
	c[7] = City("Madrid");
	c[8] = City("Paris");
	c[9] = City("Milan");
	c[10] = City("Essen");
	c[11] = City("St Petersburg");

	//yellow
	c[12] = City("Los Angeles");
	c[13] = City("Mexico");
	c[14] = City("Miami");
	c[15] = City("Bogota");
	c[16] = City("Lima");
	c[17] = City("Santiago");
	c[18] = City("Buenos Aires");
	c[19] = City("Sao Paolo");
	c[20] = City("Lagos");
	c[21] = City("Kinshasa");
	c[22] = City("Johannesburg");
	c[23] = City("Khartoum");

	//black
	c[24] = City("Moscow");
	c[25] = City("Istanbul");
	c[26] = City("Algers");
	c[27] = City("LeCaire");
	c[28] = City("Bagdad");
	c[29] = City("Teheran");
	c[30] = City("Karachi");
	c[31] = City("Ryad");
	c[32] = City("Dehli");
	c[33] = City("Mumbai");
	c[34] = City("Chennai");
	c[35] = City("Calcutta");

	//red
	c[36] = City("Pekin");
	c[37] = City("Seoul");
	c[38] = City("Tokyo");
	c[39] = City("Shanghai");
	c[40] = City("Osaka");
	c[41] = City("Taipei");
	c[42] = City("Hong Kong");
	c[43] = City("Manila");
	c[44] = City("Bangkok");
	c[45] = City("Ho Chi Min City");
	c[46] = City("Jakarta");
	c[47] = City("Sydney");

	for (int i = 0; i < 48; i++){
		myGraph.addCityVertexToGraph(c[i]);
	}

	//blue
	//Atlanta
	myGraph.addedge(c[0], c[2]);
	myGraph.addedge(c[0], c[4]);
	myGraph.addedge(c[0], c[14]);

	//San Francisco
	myGraph.addedge(c[1], c[12]);
	myGraph.addedge(c[1], c[2]);
	myGraph.addedge(c[1], c[38]);
	myGraph.addedge(c[1], c[43]);

	//Chicago
	myGraph.addedge(c[2], c[3]);

	//Montreal
	myGraph.addedge(c[3], c[4]);
	myGraph.addedge(c[3], c[5]);

	//Washington
	myGraph.addedge(c[4], c[5]);
	myGraph.addedge(c[4], c[14]);

	//NY
	myGraph.addedge(c[5], c[6]);
	myGraph.addedge(c[5], c[7]);
	
	//London
	myGraph.addedge(c[6], c[7]);
	myGraph.addedge(c[6], c[8]);
	myGraph.addedge(c[6], c[10]);

	//Madrid
	myGraph.addedge(c[7], c[19]);
	myGraph.addedge(c[7], c[8]);
	myGraph.addedge(c[7], c[26]);

	//Paris
	myGraph.addedge(c[8], c[9]);
	myGraph.addedge(c[8], c[10]);
	myGraph.addedge(c[8], c[26]);

	//Milan
	myGraph.addedge(c[9], c[10]);
	myGraph.addedge(c[9], c[25]);

	//Essen
	myGraph.addedge(c[10], c[11]);

	//St Petersburg
	myGraph.addedge(c[11], c[24]);
	myGraph.addedge(c[11], c[25]);


	//yellow
	//



}