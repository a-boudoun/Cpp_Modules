/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:44:11 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/21 19:44:12 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include<iostream>

template <typename T> void swap(T& a, T& b)
{
	T s;
	s = a;
	a = b;
	b = s;
}

template <typename T> T min(T a, T b)
{
	return((b > a) ? a : b);
}

template <typename T> T max(T a, T b)
{
	return ((a > b) ? a : b);
}
