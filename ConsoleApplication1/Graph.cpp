#include "Graph.h"
#include "City.h"

Graph::Graph()
{

}


Graph::~Graph()
{
}
/*void Graph::addvertex(const string &name)
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
}*/
Graph::Graph(vector<City> c)
{
	for (std::vector<int>::size_type i = 0; i != c.size(); i++) {
		addCityToGraph(c[i]);
		addEdgeToCity(c[i], c[i + 1], (i + 1) * 99);
	}
	
}
void Graph::addCityVertexToGraph(City& city)
{
	vmap::iterator itr = work.find(city.getCardName());
	if (itr == work.end())
	{
		vertex *v;
		v = new vertex(city.getCardName());
		work[city.getCardName()] = v;
		return;
	}
	cout << "\nVertex already exists!";
}

void Graph::printGraph()
{
	vmap::iterator itr= work.begin();
	for (std::vector<int>::size_type i = 0; i != work.size(); i++)
	{
		//work.operator[i];
		//string s = work.at(i);
		cout << "************"<< work.operator[i] << endl;
	}


}
/*void Graph::addedge(const string& from, const string& to, double cost)
{
	vertex *f = (work.find(from)->second);
	vertex *t = (work.find(to)->second);
	pair<int, vertex *> edge = make_pair(cost, t);
	f->adj.push_back(edge);
}*/
void Graph::addEdgeToCity(City& f, City& t, double cost)
{
	vertex *from = (work.find(&f.getCardName)->second);
	vertex *to = (work.find(t.getCardName)->second);
	pair<int, vertex *> edge = make_pair(cost, to);
	from->adj.push_back(edge);
}