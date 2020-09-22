#include "UI.h"

UI::UI(ServiceShop& serviceShop) {

	this->serviceShop = serviceShop;
}

UI::UI() {}
UI::~UI(){}
void UI::getAll() {

	vector<string> array;
	array = this->serviceShop.getAll();

	for (int i = 0; i < int(array.size()); i++) {
		cout << array[i] << std::endl;
	}
}

void UI::showMenu() {

	int opt;
	bool ok = false;
	do {
		cin >> opt;
		switch (opt) {
		case 1: {this->getAll(); break; ok = true; }
		}

	} while (!ok);
}

