#pragma once
#include "ServiceShop.h"
#include <iostream>

class UI {

private:
	ServiceShop serviceShop;
	void getAll();
public:
	UI();
	UI(ServiceShop&);
	void showMenu();
	~UI();
};