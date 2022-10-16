
#ifndef CONTACT_HPP
#define CONTACT_HPP

#ifndef CONTACT
#define CONTACT

# include <iostream>
#define str std::string

class Contact{
	private:
		str	first_name;
		str	last_name;
		str	nickname;
		str	phone_number;
		str	darkest_secret;
	public:
		Contact();
		str	GetFirstName();
		str	GetLastName();
		str	GetNickName();
		str	GetPhoneNumber();
		str	GetDarkestSecret();

		void	set_FirstName(str first_name);
		void	set_LastName(str last_name);
		void	set_NickName(str nickname);
		void	set_PhoneNumber(str phone_number);
		void	set_DarkestSecret(str darkest_secret);
};
#endif
#endif
