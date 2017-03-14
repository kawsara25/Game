#include <iostream>
#include <string>

using namespace std;

class pawn {

private:
	string color;
	string location;
public:
	string getColor() {
		return color;
	}
	void setColor(string s) {
		color = s;
	}

	pawn(string s, string l) {
		color = s;
		location = l;
	}
	pawn() {
		color = "black";
	}
	~pawn() {};
	string toString() {
		return color + "\n" + location;
	}

};

class refCard {

private:
	string info;
public:
	refCard() {
		info = "*insert all info for reference cards here*";
	}
	~refCard() {};
	string toString() {
		return info;
	}
};

class roleCard {

private:
	string color;
public:
	string getColor() {
		return color;
	}
	void setColor(string s) {
		color = s;
	}

	roleCard(string s) {
		color = s;
	}
	roleCard() {
		color = "black";
	}
	~roleCard() {};
	string toString() {
		return color;
	}

};

class player{

private:
	refCard ref;
	pawn p;
	roleCard role;
public:
	player() {
		ref = refCard();
		p = pawn();
		role = roleCard();
	};
	player(refCard re, pawn pa, roleCard ro) {
		ref = re;
		p = pa;
		role = ro;
	}
	roleCard getRole() {
		return role;
	}
	pawn getPawn() {
		return p;
	}
	refCard getRef() {
		return ref;
	}
	~player() {};

	string toString() {
		return ref.toString() + "\n" + p.toString() + "\n" + role.toString();
	}

	void savePlayer();

	void loadPlayer();
};
