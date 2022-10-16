# include "Contact.hpp"

Contact::Contact()
{
	this->darkest_secret = "";
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
}

str	Contact::GetFirstName()
{
	return(this->first_name);
}

str	Contact::GetLastName()
{
	return(this->last_name);
}

str	Contact::GetNickName()
{
	return(this->nickname);
}

str	Contact::GetPhoneNumber()
{
	return(this->phone_number);
}

str	Contact::GetDarkestSecret()
{
	return(this->darkest_secret);
}

void	Contact::set_FirstName(str first_name)
{
	this->first_name = first_name;
}

void	Contact::set_LastName(str last_name)
{
	this->last_name = last_name;
}

void	Contact::set_NickName(str nickname)
{
	this->nickname = nickname;
}

void	Contact::set_PhoneNumber(str phone_number)
{
	this->phone_number = phone_number;
}

void	Contact::set_DarkestSecret(str darkest_secret)
{
	this->darkest_secret = darkest_secret;
}
