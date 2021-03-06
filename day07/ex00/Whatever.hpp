#ifndef WHATEVER_H
#define WHATEVER_H

#include <iostream>

template< typename T >
void	swap(T & x, T & y)
{
	T tmp;

	tmp = x;
	x = y;
	y = tmp;
}

template< typename T >
T	max(T const & x, T const & y)
{
	return ((y>=x) ? y : x);
}

template< typename T >
T	min(T const & x, T const & y)
{
	return ((y<=x) ? y : x);
}

#endif