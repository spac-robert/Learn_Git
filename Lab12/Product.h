#pragma once
#include <string>
#include <ostream>

class Product {

protected:

	std::string id, name, date;
	int price, number_of_pieces;

public:

	//Constructors

	Product(); //Default constructor
	~Product(); //Desctructor
	Product(const Product&); //Copy Constructor
	Product(std::string, std::string, std::string, int, int); //Constructor's Member Initializer

	//Setters
	void set_id(std::string);
	void set_name(std::string);
	void set_date(std::string);
	void set_price(int);
	void set_number_of_pieces(int);

	//Getters
	std::string get_id();
	std::string get_name();
	std::string get_date();
	int get_price();
	int get_number_of_pieces();

	//Overloading operators
	Product& operator =(const Product&);
};