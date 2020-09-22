#pragma once
#include <sstream>
#include <vector>

std::vector<std::string> splitLine(std::string line, char delim)
{

	std::stringstream ss(line);
	std::string item;
	std::vector<std::string> elems;
	while (getline(ss, item, delim)) {
		elems.push_back(item);
	}
	return elems;
}