#pragma once
#include "Group.h"

class Book
{
	std::string name;
	Group* groups;
	int size;
	int count;
public:
	Book();
	Book(std::string name, int size);
	~Book();
	std::string getName()const;
	Contact* getGroups()const;
	int getSize()const;
	int getCount()const;
	void addGroup(const Group& group);
	void delGroup(std::string name);
};

