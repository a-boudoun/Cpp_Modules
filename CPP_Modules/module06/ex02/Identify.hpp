/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Identify.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 13:58:25 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/21 14:45:09 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Identify{
	public:
		virtual ~Identify();
};

class A : public Identify{

};

class B : public Identify{

};

class C : public Identify{

};

Identify *generate(void);
void identify(Identify *p);
void identify(Identify &p);
