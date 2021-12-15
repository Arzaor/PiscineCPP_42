#include "PhoneBook.hpp"

std::string	truncate(std::string str, size_t width)
{
	if (str.length() > width)
		return str.substr(0, width - 1) + ".";
	return str;
}

int	main()
{
	std::string	cmd;
	PhoneBook	phoneBook;
	int			id = 0;

	while (1)
	{
		std::cout << "Tapez la commande :" << std::endl;
		std::cin >> cmd;
		if (cmd == "EXIT")
		{
			break ;
			return 0;
		}
		else if (cmd == "ADD")
		{
			if (id <= 7)
			{
				phoneBook.setContact(phoneBook.addContact(id), id);
				id++;
			}
			else
				std::cout << "L'annuaire n'a plus d'espace." << std::endl;
		}
		else if (cmd == "SEARCH")
		{
			int		i = 0;
			int		index = 0;
		
			if (i == 0 && phoneBook.getContact(i).getFirstName().length() > 0)
			{
				std::cout << "|" << std::setw(10) << "Index |" << std::setw(10) << "First name |" << std::setw(10) << "Last name |" << std::setw(10) << "Nickname |" << std::endl;
				while (i <= 7 && phoneBook.getContact(i).getFirstName().length() > 0)
				{
					std::cout << "|" << std::setw(10) << phoneBook.getContact(i).getId() << " |" << std::setw(10) << truncate(phoneBook.getContact(i).getFirstName(), 10) << " |" << std::setw(10) << truncate(phoneBook.getContact(i).getLastName(), 10) << " |" << std::setw(10) << truncate(phoneBook.getContact(i).getNickname(), 10) << " |" << std::endl;
					i++;
				}
				std::cout << "Tapez l'index du contact souhaité :" << std::endl;
				std::cin >> index;
				if (phoneBook.getContact(index).getId() == index)
				{
					std::cout << phoneBook.getContact(index).getFirstName() << std::endl;
					std::cout << phoneBook.getContact(index).getLastName() << std::endl;
					std::cout << phoneBook.getContact(index).getNickname() << std::endl;
					std::cout << phoneBook.getContact(index).getPhoneNumber() << std::endl;
					std::cout << phoneBook.getContact(index).getDarkestSecret() << std::endl;
				}
				else
					std::cout << "Le contact demandé n'existe pas." << std::endl;
			}
			else
				std::cout << "Aucun contact enregistre." << std::endl;
		}
	}
	return 0;
}