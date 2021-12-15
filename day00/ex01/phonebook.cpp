#include "PhoneBook.hpp"

Contact	PhoneBook::addContact(int id)
{
	Contact	contact;
	std::string tmp;

	contact.setId(id);
	std::cout << "First name" << std::endl;
	std::cin >> tmp;
	contact.setFirstName(tmp);
	std::cout << "Last name" << std::endl;
	std::cin >> tmp;
	contact.setLastName(tmp);
	std::cout << "Nickname" << std::endl;
	std::cin >> tmp;
	contact.setNickanme(tmp);
	std::cout << "Phone number" << std::endl;
	std::cin >> tmp;
	contact.setPhoneNumber(tmp);
	std::cout << "Darkest secret" << std::endl;
	std::cin >> tmp;
	contact.setDarkestSecret(tmp);

	return contact;
}

void		PhoneBook::setContact(Contact contact, int id)
{
	this->contactBook[id] = contact;
}

Contact		PhoneBook::getContact(int id)
{
	return this->contactBook[id];
}