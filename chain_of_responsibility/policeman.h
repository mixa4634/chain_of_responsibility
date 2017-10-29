#pragma once
#ifndef HANDLER_H_INCLUDED
#define HANDLER_H_INCLUDED

#include <stdexcept> 
#include "criminal_action.h"

class policeman
{
private:
	int deduction;
	policeman *next_policeman;

	void investigate(criminal_action *ca)
	{
		//...
	}
public:
	policeman(int deduction, policeman *next_policeman = nullptr) :
		deduction(deduction),
		next_policeman(next_policeman)
	{}
	void handle_request(criminal_action *ca)
	{
		for(policeman *current_policeman = this; current_policeman != nullptr; current_policeman = current_policeman->next_policeman)
			if (ca->check(current_policeman->deduction) == true)
			{
				current_policeman->investigate(ca);
				return;
			}
		throw std::logic_error("No investigator fit");
	}
};

#endif
