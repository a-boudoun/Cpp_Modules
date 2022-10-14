# include "Contact.hpp"

Contact::Contact()
{
	this->darkest_secret = "";
	this->first_name = "";
	this->last_name = "";
	this->nickname = "";
	this->phone_number = "";
}

str	Contact::get_FirstName()
{
	return(this->first_name);
}

str	Contact::get_LastName()
{
	return(this->last_name);
}

str	Contact::get_NickName()
{
	return(this->nickname);
}

str	Contact::get_PhoneNumber()
{
	return(this->phone_number);
}

str	Contact::get_DarkestSecret()
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
