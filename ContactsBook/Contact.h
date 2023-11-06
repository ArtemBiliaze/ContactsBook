#pragma once
#include <string>

class Contact
{
	std::string name;
	std::string city;
	std::string number;
public:
	Contact();
	Contact(std::string name, std::string city, std::string number);
	~Contact();
	std::string getName()const;
	std::string getCity()const;
	std::string getNumber()const;
};

