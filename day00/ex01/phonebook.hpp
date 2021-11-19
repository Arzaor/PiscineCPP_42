#ifndef DEF_PHONEBOOK
#define DEF_PHONEBOOK

#include <iostream>
#include <iomanip>
#include <string>
#include "contact.hpp"

class PhoneBook
{
	public:

	Contact		addContact(int id);
	void		setContact(Contact contact, int id);
	Contact		getContact(int id);

	private:
	
	Contact contactBook[7];
};

#endif