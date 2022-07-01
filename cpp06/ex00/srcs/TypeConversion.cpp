/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConversion.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:22:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/07/01 16:59:05 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeConversion.hpp"

TypeConversion::TypeConversion(void)
	: literalType(TypeConversion::doubleType)
{
}

TypeConversion::TypeConversion(const char *literal)
{
	setLiteralType(literal);
}

TypeConversion::TypeConversion(const TypeConversion &rhs)
	: literalType(rhs.literalType), literal(rhs.literal)
{
}

TypeConversion &TypeConversion::operator=(const TypeConversion &rhs)
{
	if (this != &rhs)
	{
		this->literalType = rhs.literalType;
		this->literal = rhs.literal;
	}
	return *this;
}

TypeConversion::~TypeConversion()
{
}

void TypeConversion::setLiteralType(const char *literal)
{
	const std::string str = literal;

	this->literal = atof(literal);
	if (this->literal == 0 && !isdigit(literal[0]) && literal[1])
		throw TypeConversion::InvalidInputException();
	if (this->literal == 0 && !isdigit(literal[0]) && !literal[1])
	{
		this->literalType = TypeConversion::charType;
		this->literal = literal[0];
	}
	else if (str.find(".") != std::string::npos)
	{
		if (str.find("f") != std::string::npos)
			this->literalType = TypeConversion::floatType;
		else
			this->literalType = TypeConversion::doubleType;
	}
	else
		this->literalType = TypeConversion::intType;
}

void TypeConversion::literalToChar(void) const
{
	if (this->literal == static_cast<int>(this->literal))
	{
		if (this->literal < 0 || this->literal > 127)
			std::cout << "char: impossible" << std::endl;
		else if (this->literal <= 31 || this->literal == 127)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << "'" << static_cast<char>(this->literal) << "'" << std::endl;
	}
	else
		std::cout << "char: impossible" << std::endl;
}

void TypeConversion::literalToInt(void) const
{
	if (this->literal <= std::numeric_limits<int>::max() && this->literal >= std::numeric_limits<int>::min())
		std::cout << "int: " << static_cast<int>(this->literal) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void TypeConversion::literalToFloat(void) const
{
	std::cout << "float: " << static_cast<float>(this->literal);
	if (static_cast<int>(this->literal) == this->literal)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void TypeConversion::literalToDobule(void) const
{
	std::cout << "double: " << this->literal;
	if (static_cast<int>(this->literal) == this->literal)
		std::cout << ".0";
	std::cout << std::endl;
}

const char *TypeConversion::InvalidInputException::what() const throw()
{
	return ("Invalid input. Please input numeric or character value.");
}