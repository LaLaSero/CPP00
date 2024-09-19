#include "Contact.hpp"

Contact::Contact()
{
	firstName = "";
	lastName = "";
	nickName = "";
}

Contact::~Contact()
{
}


std::string Contact::getFirstName() const
{
	return firstName;
}

std::string Contact::getLastName() const
{
	return lastName;
}

std::string Contact::getNickname() const
{
	return nickName;
}

std::string Contact::getPhoneNumber() const
{
	return phoneNumber;
}

std::string Contact::getDarkestSecret() const
{
	return darkestSecret;
}

void Contact::setFirstName(const std::string& first_name)
{
	this->firstName = first_name;
}

void Contact::setLastName(const std::string& last_name)
{
	this->lastName = last_name;
}

void Contact::setNickname(const std::string& nick_name)
{
	this->nickName = nick_name;
}

void Contact::setPhoneNumber(const std::string& phone_number)
{
	this->phoneNumber = phone_number;
}

void Contact::setDarkestSecret(const std::string& darkest_secret)
{
	this->darkestSecret = darkest_secret;
}


