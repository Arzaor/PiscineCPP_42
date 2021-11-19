#ifndef DEF_CONTACT
#define DEF_CONTACT

#include <iostream>
#include <string>

class Contact
{
	public:

	void		setId(int	id);
	int			getId();
	void		setFirstName(std::string firstName);
	std::string	getFirstName();
	void		setLastName(std::string lastName);
	std::string	getLastName();
	void		setNickanme(std::string nickname);
	std::string	getNickname();
	void		setPhoneNumber(std::string phoneNumber);
	std::string	getPhoneNumber();
	void		setDarkestSecret(std::string darkestSecret);
	std::string	getDarkestSecret();

	private:

	int			id;
	std::string firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
};

#endif