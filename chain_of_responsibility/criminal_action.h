#pragma once
#ifndef CRIMINAL_ACTION_INCLUDED
#define CRIMINAL_ACTION_INCLUDED

#include <string>

class criminal_action
{
private:
	int complexity;
	std::string description;
public:
	criminal_action(std::string description, int complexity) :
		description(description),
		complexity(complexity)
	{}
	bool check(int complexity)
	{
		return complexity >= this->complexity;
	}
	const std::string& get_description() 
	{
		return description;
	}
};

#endif
