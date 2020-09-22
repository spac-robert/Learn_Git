#pragma once
#include "Product.h"
#include "Utils.h"

class PetStuff :public Product {

private:
	std::string end_date;

public:
	PetStuff();
	~PetStuff();
	PetStuff(const PetStuff&);
	PetStuff(std::string, char);
	PetStuff(std::string, std::string, std::string, std::string, int, int);
	std::string toString();
	std::string toStringDelimiter(char);
	//Setter
	void set_end_date(std::string);

	//Getter
	std::string get_end_date();

	//Overloading operators
	PetStuff& operator=(const PetStuff&);
	bool operator == (const PetStuff&);

};