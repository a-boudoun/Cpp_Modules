/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudoun <aboudoun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 15:33:35 by aboudoun          #+#    #+#             */
/*   Updated: 2022/11/20 22:51:56 by aboudoun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Convert.hpp"

Convert::Convert()
	:_input(""), _i(0), _f(0.0f), _d(0.0), _c('\0')
{
	std::cout<<"Default constructor called"<<std::endl;
}

Convert::Convert(std::string input)
	:_input(input), _i(0), _f(0.0f), _d(0.0), _c('\0')
{
	std::cout<<"Constructor called"<<std::endl;
}

Convert::Convert(Convert const & src)
{
	*this = src;
	std::cout<<"Copy constructor called"<<std::endl;
}

Convert::~Convert()
{
	std::cout << "Destructor called" << std::endl;
}

Convert & Convert::operator=(Convert const & rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		_input = rhs._input;
		_type = rhs._type;
		_i = rhs._i;
		_c = rhs._c;
		_f = rhs._f;
		_d = rhs._d;

	}
	return (*this);
}

/*********************** Check types *********************************/

bool Convert::isChar()
{
	if (_input.length() == 1 && isprint(_input[0]) && !isdigit(_input[0]))
	{
		_type = CHAR;
		this->_c = _input[0];
		return (true);
	}
	return (false);
}

bool Convert::isInt()
{
	if (_input.length() == 1 && isdigit(_input[0]))
	{
		this->_i = std::stoi(_input);
		return (true);
	}

	for (size_t i = 0; i < _input.length(); i++)
	{
		if (i == 0 && (_input[i] == '-' || _input[i] == '+'))
			continue;
		if (!isdigit(_input[i]))
			return (false);
	}
	_type = INT;
	this->_i = std::stoi(_input);
	return (true);
}

bool Convert::isDouble()
{
	bool dot = false;

	if (_input == "-inf" || _input == "+inf" || _input == "nan")
	{
		this->_d = std::stod(_input);
		return (true);
	}
	for (size_t i = 0; i < _input.length(); i++)
	{
		if (i == 0 && (_input[i] == '-' || _input[i] == '+'))
			continue;
		if (_input[i] == '.')
		{
			if (dot)
				return (false);
			dot = true;
			continue;
		}
		if (!isdigit(_input[i]))
			return (false);
	}
	if (dot)
	{
		this->_d = std::stod(_input);
		_type = DOUBLE;
		return (true);
	}
	return (false);
}

bool Convert::isNanInf()
{
	if (_input == "-inf" || _input == "+inf" || _input == "nan" || _input == "-inff" || _input == "+inff" || _input == "nanf")
	{
		_d = std::stod(_input);
		_f = std::stof(_input);

		std::cout<<"char: impossible"<<std::endl;
		std::cout<<"int: impossible"<<std::endl;
		std::cout<<"float: "<<_f<<"f"<<std::endl;
		std::cout<<"double: "<<_d<<std::endl;
		return(true);
	}
	return false;
}

bool Convert::isFloat()
{
	bool f = false;

	if (_input == "-inff" || _input == "+inff" || _input == "nanf")
		return true;
	if (!isDouble())
		return (false);
	for (size_t i = 0; i < _input.length(); i++)
	{
		if (_input[i] == 'f')
		{
			if (f)
				return (false);
			f = true;
			continue;
		}
	}
	if (f)
	{
		this->_f = std::stof(_input);
		_type = FLOAT;
		return (true);
	}
	return (false);
}


bool Convert::validInput()
{
	if (isChar() || isInt() || isFloat() || isDouble())
		return (true);
	return (false);
}

/*********************** Convert types *********************************/

void Convert::cast()
{
	    switch ( _type ) {
    case CHAR:
        _i = static_cast< int >( _c );
        _f = static_cast< float >( _c );
        _d = static_cast< double >( _c );
        break;
    case INT:
        _f = static_cast< float >( _i );
        _d = static_cast< double >( _i );
        _c = static_cast< char >( _i );
        break;
    case FLOAT:
        _i = static_cast< int >( _f );
        _d = static_cast< double >( _f );
        _c = static_cast< char >( _f );
        break;
    case DOUBLE:
        _i = static_cast< int >( _d );
        _f = static_cast< float >( _d );
        _c = static_cast< char >( _d );
        break;
    default:
        break;
    }
}

void Convert::display()
{
	std::cout << "char: ";
	if ( std::isprint( _c ) )
		std::cout << "'" << _c << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
	std::cout << "int: " << _i << std::endl;
	std::cout << "float: " << _f << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;
}
