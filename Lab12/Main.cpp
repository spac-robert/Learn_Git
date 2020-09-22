#include "UI.h"
#include <iostream>

int main()
{
    Repository<Pet>* repoPet = new RepositoryFileTXT<Pet>("Pet.txt");
    ((RepositoryFile<Pet>*)repoPet)->loadFromFile();
    Repository<PetStuff>* repoPetStuff = new RepositoryFileTXT<PetStuff>("PetStuff.txt");
    ((RepositoryFile<PetStuff>*)repoPetStuff)->loadFromFile();

    ServiceShop serviceShop(repoPet, repoPetStuff);
    UI ui(serviceShop);

    ui.showMenu();
    return 0;
}

