#include "ServiceShop.h"

ServiceShop::ServiceShop() {}
ServiceShop::~ServiceShop() {}

ServiceShop::ServiceShop(Repository<Pet>* repoPet, Repository<PetStuff>* repoPetStuff) {
	this->repoPet = repoPet;
	this->repoPetStuff = repoPetStuff;
}

vector<string> ServiceShop::getAll() {

	vector<string> array;
	vector<Pet> arrayPet= repoPet->getAll();
	vector<PetStuff> arrayPetStuff = repoPetStuff->getAll();

	for(int i=0;i< int(arrayPet.size());i++)
		array.push_back(arrayPet[i].toString());

	for (int i = 0; i < int(arrayPetStuff.size()); i++)
		array.push_back(arrayPetStuff[i].toString());

	return array;
}