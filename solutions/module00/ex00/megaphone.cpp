/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:19:28 by aboudoun          #+#    #+#             */
/*   Updated: 2022/10/09 18:20:30 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	if (ac < 2)
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	while (av[i])
	{
		j = -1;
		while (av[i][++j])
			std::cout<<(char)toupper(av[i][j]);
		std::cout << std::endl;
		i++;
	}
}
