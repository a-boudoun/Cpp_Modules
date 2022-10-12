/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:39:43 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/12 19:33:57 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include "Contact.hpp"

# ifndef PHONEBOOK
# define PHONEBOOK
#define str std::string

class PhoneBook
{
	private:
		static int index;
		Contact contact[8];

	public:
		void	add_contact(Contact *contact);
		void	search_contact(Contact *contact);
		void	exit_contact(void);
		PhoneBook();
};

# endif
#endif
