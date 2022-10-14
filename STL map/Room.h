#pragma once
#include <iostream>
#include <map>
using namespace std;

class Room
{
public:
	enum direction { North, East, South, West };
	Room(string r);
	~Room();
	string getRoom();
	void setRoom(string r);
	void displayRoom();
	void addRoom(direction d, Room* r);
	Room* move(direction d);
private:
	string room;
	map<direction, Room*> building_map;
};