#include "Room.h"

void main() 
{
	Room* Hall = new Room("Hall");
	Room* DiningRoom = new Room("Dining Room");
	Room* LivingRoom = new Room("Living Room");
	Room* Kitchen = new Room("Kitchen");
	Room* Pantry = new Room("Pantry");
	Room* UpstairsLanding = new Room("Upstairs Landing");

	Hall->addRoom(Room::East, DiningRoom);
	Hall->addRoom(Room::West, LivingRoom);
	Hall->addRoom(Room::South, UpstairsLanding);
	DiningRoom->addRoom(Room::South, Kitchen);
	DiningRoom->addRoom(Room::West, Hall);
	Kitchen->addRoom(Room::East, Pantry);
	Kitchen->addRoom(Room::North, DiningRoom);
	LivingRoom->addRoom(Room::East, Hall);
	Pantry->addRoom(Room::West, Pantry);
	UpstairsLanding->addRoom(Room::North, Hall);
	
	bool game_on = true;
	
	Room* current_room = Hall;
	string user_choice;
	while (game_on == true)
	{
		cout << "You are currently in the " << current_room->getRoom() << "\n\n\n" << "Please pick one of the 4 cardinal directions\n";
		cin >> user_choice;
		
		if (user_choice == "North" || "north")
		{
			current_room = current_room->move(Room::North);
			cout << "\n\n\n";
		}
		if (user_choice == "East" || "east")
		{
			current_room = current_room->move(Room::East);
			cout << "\n\n\n";
		}
		if (user_choice == "South" || "south")
		{
			current_room = current_room->move(Room::South);
			cout << "\n\n\n";
		}
		if (user_choice == "West" || "west")
		{
			current_room = current_room->move(Room::West);
			cout << "\n\n\n";
		}
		else
		{
			cout << "Please enter the direction again";
			cout << "\n\n\n";
		}
	}




}