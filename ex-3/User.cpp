#include "User.h"

int User::numberOfAllUsersEver = 0;

User::User(std::string firstName, std::string lastName) {
	
}

User::User() {}

User::User(std::string firstName, std::string lastName, std::vector<User*> friends) {
	numberOfAllUsersEver++;

	id = numberOfAllUsersEver;
	this->firstName = firstName;
	this->lastName = lastName;
	this->friends = friends;
}
