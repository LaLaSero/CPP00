#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact
{
	private:
		std::string lastName;
		std::string firstName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
	Contact();
	~Contact();

	// アクセサ（ゲッター）
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickname() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;

	// ミューテータ（セッター）
	void setFirstName(const std::string& firstName);
	void setLastName(const std::string& lastName);
	void setNickname(const std::string& nickname);
	void setPhoneNumber(const std::string& phoneNumber);
	void setDarkestSecret(const std::string& darkestSecret);

};

#endif