#pragma once
#include "RepositoryFile.h"
#include <fstream>
using namespace std;

template  <class T>
class RepositoryFileCSV :public RepositoryFile<T>
{
public:
	RepositoryFileCSV();
	RepositoryFileCSV(const char*);
	void loadFromFile();
	void saveToFile();
	~RepositoryFileCSV();
};
template<class T>
RepositoryFileCSV<T>::RepositoryFileCSV()
{
}

template<class T>
inline RepositoryFileCSV<T>::RepositoryFileCSV(const char* fName) :RepositoryFile<T>(fName)
{
}

template<class T>
void RepositoryFileCSV<T>::loadFromFile()
{
	string line;
	ifstream f(RepositoryFile<T>::fileName);
	while (getline(f, line)) {
		T ob(line, ',');
		Repository<T>::elem.push_back(ob);
	}
}

template<class T>
void RepositoryFileCSV<T>::saveToFile()
{
	ofstream f(RepositoryFile<T>::fileName);
	for (T crt : Repository<T>::elem) {
		f << crt.toStringDelimiter(',') << endl;
	}
}

template<class T>
RepositoryFileCSV<T>::~RepositoryFileCSV()
{
}

