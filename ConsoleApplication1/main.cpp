#include <string>
#include  <iostream>
#include <vector>
using namespace std;
#include "City.h"
#include "Graph.h"
#include "windows.h"
#include <stdio.h>
#include <math.h>
#include<stdlib.h>

int main()
{
	Graph myGraph;
	vector<City> c;
	City c1;
	City c2("Madrid");
	City c3("Helsinki");
	City c4("Stockholm");
	City c5("Copenhagen");
	City c6("Warsaw");
	myGraph.addCityVertexToGraph(c1);
	myGraph.addCityVertexToGraph(c2);
	myGraph.addCityVertexToGraph(c3);
	myGraph.addCityVertexToGraph(c4);
	myGraph.addCityVertexToGraph(c5);
	myGraph.addCityVertexToGraph(c6);
	myGraph.printGraph();

	

	std::cin.clear(); // reset any error flags
	std::cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	std::cin.get(); // get one more char from the user
	
	return 0;
}