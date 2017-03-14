#include <iostream>
#include <string>

using namespace std;

class City {
private:
	string name;
	int infCubes;
public:
	City(string s) {
		name = s;
		infCubes = 0;
	}
	int addInfCubes(){
		return infCubes++;
	}

};