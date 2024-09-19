
#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
# include <string>
# include <iomanip>
# include <ctime>

class PhoneBook
{
	private:
		int	num_of_contacts;
		int oldest_index;
	public:
		PhoneBook();
		~PhoneBook();
		Contact	contacts[8];
		void	displayContacts(int index);
		int		GetNumOfContacts();
		void	addContact(std::string first_name, std::string last_name, std::string nick_name,
				std::string phone_number, std::string darkest_secret);
};

#endif