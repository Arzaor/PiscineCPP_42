#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <iostream>
#include <string>
#include "contact.h"

class Phonebook
{
	public:

	void	add_contact();

	private:
	
	Contact *contact;
};

#endif