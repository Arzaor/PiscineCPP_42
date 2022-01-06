#pragma once
#ifndef ITER_H
#define ITER_H

#include <iostream>
#include <string>

template < typename T >
void	iter(T* arrayPtr, int length, void (f)(T const &))
{
	for (int i = 0; i < length; i++)
		f(arrayPtr[i]);
}

#endif