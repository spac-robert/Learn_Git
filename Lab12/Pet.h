#pragma once
#include "Product.h"
#include "Utils.h"

class Pet :public Product {

private:
	int age;

public:
	//Constructors 

	Pet();//Default constructor
	~Pet();//Destructor
	Pet(const Pet&);//Copy constructor
	Pet(std::string, char);
	Pet(std::string, std::string, std::string, int, int, int);//Constructor's Member Initializer
	std::string toString();
	std::string toStringDelimiter(char delim);
	//Setter
	void set_age(int);

	//Getter
	int get_age();

	//Overloading operators
	Pet& operator=(const Pet&);
	bool operator == (const Pet&);
};