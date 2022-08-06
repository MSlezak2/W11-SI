#pragma once
#include <string>
#include <vector>
class User {
public:
	User();
	User(std::string firstName, std::string lastName, std::vector<User*> friends);
	User(std::string firstName, std::string lastName) :
		User(firstName, lastName, std::vector<User*>{}) {}; //TODO: Is that a correct way to pass an empty vector?

private:
	int id;
	std::string firstName;
	std::string lastName;
	std::vector<User*> friends;

	static int numberOfAllUsersEver;
};

