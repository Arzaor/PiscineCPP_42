#pragma once
#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain();
		Brain(std::string idea);
		Brain(const Brain & rhs);
		~Brain();

		Brain &operator=(Brain const & rhs);
	private:
		std::string ideas[100];
};

#endif