#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	num_of_contacts = 0;
	oldest_index = 0;
}

PhoneBook::~PhoneBook()
{
	
}

int PhoneBook::GetNumOfContacts()
{
	return this->num_of_contacts;
}


void PhoneBook::displayContacts(int index)
{
	if (index == -1)
	{
		std::cout << std::setw(10) << "Index" << "|";
		std::cout << std::setw(10) << "First name" << "|";
		std::cout << std::setw(10) << "Last name" << "|";
		std::cout << std::setw(10) << "Nickname" << std::endl;
		int max_contacts = num_of_contacts > 8 ? 8 : num_of_contacts;
		for (int i = 0; i < max_contacts; i++)
		{
			std::cout << std::setw(10) << i << "|";
			std::cout << std::setw(10) << contacts[i].getFirstName() << "|";
			std::cout << std::setw(10) << contacts[i].getLastName() << "|";
			std::cout << std::setw(10) << contacts[i].getNickname() << std::endl;
		}
	}
	else if (index >= 0 && index < num_of_contacts)
	{
		std::cout << "First name: " << contacts[index].getFirstName() << std::endl;
		std::cout << "Last name: " << contacts[index].getLastName() << std::endl;
		std::cout << "Nickname: " << contacts[index].getNickname() << std::endl;
		std::cout << "Phone number: " << contacts[index].getPhoneNumber() << std::endl;
		std::cout << "Darkest secret: " << contacts[index].getDarkestSecret() << std::endl;
	}
}

void PhoneBook::addContact(std::string first_name, std::string last_name, std::string nick_name,
			std::string phone_number, std::string darkest_secret)
{
	int current_index;
	if (num_of_contacts < 8) {
		current_index = num_of_contacts;
	} else {
		current_index = oldest_index;
		oldest_index = (oldest_index + 1) % 8;
	}
	contacts[current_index].setFirstName(first_name);
	contacts[current_index].setLastName(last_name);
	contacts[current_index].setNickname(nick_name);
	contacts[current_index].setPhoneNumber(phone_number);
	contacts[current_index].setDarkestSecret(darkest_secret);
	if (num_of_contacts < 8)
		num_of_contacts++;
}
