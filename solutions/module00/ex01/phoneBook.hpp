/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:39:43 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/16 12:32:40 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include "Contact.hpp"

# ifndef PHONEBOOK
# define PHONEBOOK

class PhoneBook
{
	private:
		int index;
		Contact contact[8];
		str	requestInfo(str info);

	public:
		PhoneBook();
		void	add();
		void	search();
		void	exit();
		int		GetIndex();
};

# endif
#endif
