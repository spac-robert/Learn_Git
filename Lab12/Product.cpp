#include "Product.h"

Product::Product()
{
	this->id = "";
	this->name = "";
	this->date = "";
	this->price = 0;
	this->number_of_pieces = 0;
}

Product::Product(const Product& produce) {

	this->id = produce.id;
	this->name = produce.name;
	this->date = produce.date;
	this->price = produce.price;
	this->number_of_pieces = produce.number_of_pieces;
}

Product::Product(std::string id, std::string name, std::string date, int price, int number_of_pieces) {

	this->id = id;
	this->name = name;
	this->date = date;
	this->price = price;
	this->number_of_pieces = number_of_pieces;
}

Product::~Product()
{
	this->id = "";
	this->name = "";
	this->date = "";
	this->price = 0;
	this->number_of_pieces = 0;
}

//Setters
void Product::set_id(std::string new_id) {

	this->id = new_id;
}

void Product::set_name(std::string new_name) {

	this->name = new_name;
}

void Product::set_date(std::string new_date) {

	this->date = new_date;
}

void Product::set_price(int new_price) {

	this->price = new_price;
}


void Product::set_number_of_pieces(int number_of_pieces) {

	this->number_of_pieces = number_of_pieces;

}

//Getters
std::string Product::get_id() {

	return this->id;
}

std::string Product::get_name() {

	return this->name;
}

std::string Product::get_date() {

	return this->date;
}

int Product::get_price() {

	return this->price;
}


int Product::get_number_of_pieces() {

	return this->number_of_pieces;

}

Product& Product::operator =(const Product& produce) {

	this->set_id(produce.id);
	this->set_name(produce.name);
	this->set_date(produce.date);
	this->set_price(produce.price);
	this->set_number_of_pieces(produce.number_of_pieces);

	return *this;
}
