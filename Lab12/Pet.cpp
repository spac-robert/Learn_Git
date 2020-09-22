#include "Pet.h"

Pet::Pet() {

	this->age = 0;
}

Pet::~Pet() {

	this->age = 0;
}
Pet::Pet(const Pet& pet) :Product(pet) {

	this->age = pet.age;
}

Pet::Pet(std::string str, char delimiter) {

	std::vector<std::string> tokens = splitLine(str, delimiter);
	id = tokens[0];
	name = tokens[1];
	date = tokens[2];
	price = stoi(tokens[3]);
	number_of_pieces = stoi(tokens[4]);
	age = stoi(tokens[5]);
}

Pet::Pet(std::string id, std::string name, std::string date, int price, int age, int number_of_pieces) :
	Product(id, name, date, price, number_of_pieces) {

	this->age = age;
}

//Setter
void Pet::set_age(int new_age) {

	this->age = new_age;
}

//Getter
int Pet::get_age() {

	return this->age;
}

//Overloading operators

Pet& Pet::operator = (const Pet& pet) {

	Product::operator = (pet);
	this->set_age(pet.age);

	return *this;
}

std::string Pet::toString()
{
	return id + ' ' + name + ' ' + date + ' ' + std::to_string(price) + ' ' + std::to_string(number_of_pieces) + ' ' + std::to_string(age);
}

std::string Pet::toStringDelimiter(char delim)
{
	return id + delim + name + delim + date + delim + std::to_string(price) + delim + std::to_string(number_of_pieces) + delim + std::to_string(age);
}

bool Pet:: operator == (const Pet& pet) {

	return pet.id == id and pet.name == name and pet.price == price and pet.date == date and pet.age == age and pet.number_of_pieces == number_of_pieces;
}


