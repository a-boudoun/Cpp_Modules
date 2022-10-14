/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:39:43 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/14 16:17:29 by aboudoun         ###   ########.fr       */
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

	public:
		PhoneBook();
		void	add();
		void	search();
		void	exit();
		int		get_index();
};

# endif
#endif
