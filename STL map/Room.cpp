#include "Room.h"

Room::Room(string r)
{
    room = r;
 
}

Room::~Room()
{
}

std::string Room::getRoom()
{
    return room;
}

void Room::setRoom(string r)
{
    room = r;
}

void Room::displayRoom()
{
    std::cout << getRoom();
}

void Room::addRoom(direction d, Room* r)
{
    if (building_map.count(d) == 0)
    {
        building_map.insert({d,r});
    }
    else if (building_map.count(d) > 0)
    {
        building_map[d] = r;
    }
}

Room* Room::move(direction d)
{
    if (building_map.count(d) > 0)
    {
        Room* temp = building_map[d];
        return temp;
    }
    return this;
}


