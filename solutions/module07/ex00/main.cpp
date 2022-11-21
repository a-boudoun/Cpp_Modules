/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 19:44:08 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/21 20:12:14 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Whatever.hpp"

// void swap(int a, int b){
// 	(void)	a;
// 	(void)	b;
// 	std::cout<<"adfjioadjsf"<<std::endl;
// }

// int min(int a, int b){
// 	(void)	a;
// 	(void)	b;
// 	std::cout<<"minminmimin"<<std::endl;
// 	return (0);
// }

// int max(int a, int b){
// 	(void)	a;
// 	(void)	b;
// 	std::cout<<"maxmaxmaxmax"<<std::endl;
// 	return(0);
// }

int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
