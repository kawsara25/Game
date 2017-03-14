#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <string>
#include "City.h"
struct vertex {
	//typedef pair<int, vertex*> ve;
	vector<vertex*> adj; //destination vertex
	string name;
	vertex(string s) : name(s) {}
};

class Graph
{
public:

	typedef map<string, vertex *> vmap;
	typedef map<City, vertex *> cMap;
	vmap work;
	cMap cityMap;
	vector <City> cityInGraph;
	void showCity(string &cityname);
	void addVertexToGraph(const string&);
	void addCityVertexToGraph(City&);
	void printGraph();
	void addedge(City& from, City& to);
	void getCityEdge(City&);
};
void Graph::addVertexToGraph(const string &name)
{
	vmap::iterator itr = work.find(name);
	if (itr == work.end())
	{
		vertex *v;
		v = new vertex(name);
		work[name] = v;
		return;
	}
	cout << "\nVertex already exists!";
}


void Graph::addCityVertexToGraph( City &name)
{
	vmap::iterator itr = work.find(name.getCardName());
	if (itr == work.end())
	{
		vertex *v;
		v = new vertex(name.getCardName());
		work[name.getCardName()] = v;
		cityInGraph.push_back(name);
		return;
	}
	cout << "\nVertex already exists!";
}


void Graph::addedge(City& f, City& t)
{
	vertex *from = (work.find(f.getCardName)->second);
	vertex *to = (work.find(t.getCardName)->second);
	vertex *edge = to;
	//pair<int, vertex *> edge = make_pair(cost, t);
	from->adj.push_back(edge);
	to->adj.push_back(from);

}
void Graph::printGraph()
{
	vmap::iterator itr = work.begin();
	cout << "*****************************************************" << endl;
	while (itr != work.end())
	{
		string c = itr->first;
		//cout << "*"<<itr->first ;
		showCity(c);
		cout << endl;
		++itr;
	}
	cout << "*****************************************************" << endl;
}
void Graph::showCity(string &name)
{
	City c(name);
	vector<City>::iterator it = cityInGraph.begin();
	while (it != cityInGraph.end())
	{
		if (c.getCardName() == it->getCardName())
		{
			it->toString();
			return;
		}
		++it;

	}


}

void Graph::getCityEdge(City& c){

	vertex *from = work.find(c.getCardName())->second;
	vector<vertex*> v = from->adj;

	cout << "In: " << from->name << " connected to: " << endl;

	vector<vertex*> ::iterator itr = v.begin();

	for (int i = 0; i < v.size(); i++){
		cout << v[i]->name << endl;
	}
}
