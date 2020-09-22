#include "PetStuff.h"

PetStuff::PetStuff() {

	this->end_date = "";
}

PetStuff::~PetStuff() {
	this->end_date = "";
}

PetStuff::PetStuff(const PetStuff& pet_stuff) :Product(pet_stuff) {

	this->end_date = pet_stuff.end_date;
}

PetStuff::PetStuff(std::string str, char delimiter) {

	std::vector<std::string> tokens = splitLine(str, delimiter);
	id = tokens[0];
	name = tokens[1];
	date = tokens[2];
	price = stoi(tokens[3]);
	number_of_pieces = stoi(tokens[4]);
	end_date = tokens[5];
}

PetStuff::PetStuff(std::string id, std::string name, std::string date, std::string end_date, int price, int number_of_pieces) :
	Product(id, name, date, price, number_of_pieces) {

	this->end_date = end_date;
	//Pet_stuff::Produce(id, name, date, price, number_of_pieces);
}

//Setter
void PetStuff::set_end_date(std::string new_end_date) {

	this->end_date = new_end_date;
}

//Getter
std::string PetStuff::get_end_date() {

	return this->end_date;
}

//Overloading operators

PetStuff& PetStuff::operator=(const PetStuff& pet_stuff) {

	this->end_date = pet_stuff.end_date;
	Product::operator=(pet_stuff);

	return *this;
}

std::string PetStuff::toString()
{
	return id + ' ' + name + ' ' + date + ' ' + end_date + ' ' + std::to_string(price) + ' ' + std::to_string(number_of_pieces);
}

std::string PetStuff::toStringDelimiter(char delim)
{
	return id + delim + name + delim + date + delim + end_date + delim + std::to_string(price) + delim + std::to_string(number_of_pieces);
}


bool PetStuff:: operator == (const PetStuff& pet) {

	return pet.id == id and pet.name == name and pet.price == price and pet.date == date and pet.end_date == end_date and pet.number_of_pieces == number_of_pieces;
}

