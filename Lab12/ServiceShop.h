#pragma once
#include "RepositoryFileCSV.h"
#include "RepositoryFileTXT.h"
#include "Pet.h"
#include "PetStuff.h"

class ServiceShop {

private:
	Repository<Pet>* repoPet;
	Repository<PetStuff>* repoPetStuff;

public:
	ServiceShop();
	~ServiceShop();
	vector<string>getAll();
	ServiceShop(Repository<Pet>*, Repository<PetStuff>*);

};