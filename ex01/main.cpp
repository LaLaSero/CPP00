#include "main.hpp"

std::string truncateString(const std::string& str, size_t max_length = 10)
{
	if (str.length() > max_length)
		return str.substr(0, max_length - 1 ) + ".";
	return str;
	}

std::string getCommand(std::string message)
{
	std::string command;

	while (command.empty())
	{
		std::cout << message;
		if (!std::getline(std::cin, command))
			std::exit(1);
	}
	return command;
}

void add_contact(PhoneBook *phoneBook)
{
	std::string first_name = truncateString(getCommand("Enter first name: "));
	std::string last_name = truncateString(getCommand("Enter last name: "));
	std::string nick_name = truncateString(getCommand("Enter nickname: "));
	std::string phone_number = truncateString(getCommand("Enter phone number: "));
	std::string darkest_secret = truncateString(getCommand("Enter darkest secret: "));
 
	phoneBook->addContact(first_name, last_name, nick_name, phone_number, darkest_secret);
}

void search_contact(PhoneBook *phoneBook)
{
	std::string index_str;
	int index;

	if (phoneBook->GetNumOfContacts() <= 0 || phoneBook->GetNumOfContacts() > 8)
	{
		std::cout << "No contacts available" << std::endl;
		return;
	}
	phoneBook->displayContacts(-1);
	while (1)
	{
		index_str = getCommand("Enter index of contact: ");
		if (index_str.length() == 1 && index_str[0] >= '0' && index_str[0] <= '7')
			break;
		std::cout << "Invalid index" << std::endl;
	}
	index = index_str[0] - '0';
	if (index >= phoneBook->GetNumOfContacts())
		std::cout << "Invalid index" << std::endl;
	else
		phoneBook->displayContacts(index);

}

int main(void)
{
	std::string command;
	PhoneBook phoneBook;

	while (1)
	{
		std::cout << "Enter a command: ";
		if (!std::getline(std::cin, command))
			break;
		if (command == "ADD")
			add_contact(&phoneBook);
		else if (command == "SEARCH")
			search_contact(&phoneBook);
		else if (command == "EXIT")
			break;
		else
			std::cout << "Invalid command" << std::endl;
	}
	return 0;
}
