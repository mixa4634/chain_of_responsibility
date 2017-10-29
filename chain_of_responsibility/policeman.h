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
		if (ca->check(deduction) == true)
			investigate();
		else
			if (next_policeman != nullptr)
				next_policeman->handle_request(ca);
			else
				throw std::logic_error("No investigator fit");
	}
};

#endif
