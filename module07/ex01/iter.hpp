/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 13:32:51 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/22 13:43:42 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template <typename T>
void	iter(T *arr, size_t length, void (*func)(T const &))
{
	for(size_t i = 0; i < length; i++){
		func(arr[i]);
	}
}
