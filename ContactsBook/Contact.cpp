#include "framework.h"
#include "Contact.h"

Contact::Contact(): name("-"), city("-"), number("-")
{
}

Contact::Contact(std::string name, std::string city, std::string number)
	: name(name), city(name), number(number)
{
}

Contact::~Contact()
{
}

std::string Contact::getName() const
{
	return name;
}

std::string Contact::getCity() const
{
	return city;
}

std::string Contact::getNumber() const
{
	return number;
}
