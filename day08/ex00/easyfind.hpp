#pragma once
#ifndef EASYFIND_H
#define EASYFIND_H

#include <string>
#include <iostream>
#include <list>
#include <vector>

template < typename T >
int	easyfind(T container, int n)
{
	typename T::iterator	it;

	it = find(container.begin(), container.end(), n);
	if (it != container.end())
		return (n);
	throw std::runtime_error("Exception: Occurence Not Found");
}

#endif