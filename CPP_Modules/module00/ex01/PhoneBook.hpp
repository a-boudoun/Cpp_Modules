/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 18:39:43 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/18 14:44:20 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Contact.hpp"

class PhoneBook
{
	private:
		int index;
		Contact contact[8];
		str	requestInfo(str info);
		str truncate(str s);

	public:
		PhoneBook();
		void	add();
		void	search();
		void	exit();
		int		GetIndex();
};

