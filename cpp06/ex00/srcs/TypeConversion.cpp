/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConversion.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:22:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/07/01 16:10:35 by jihoh            ###   ########.fr       */
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
	this->literalType = rhs.literalType;
	this->literal = rhs.literal;
	return *this;
}

TypeConversion::~TypeConversion()
{
}

void TypeConversion::checkValidInput(const char *literal)
{
	int dotCnt = 0;
	int i;

	if (atof(literal) == std::numeric_limits<double>::infinity() || isnan(atof(literal)))
		return ;
	if (!isdigit(literal[0]) && !literal[1])
		return ;
	if (literal[0] == '-' && atof(literal) != 0)
		return ;
	for (i = 0; literal[i + 1]; i++)
	{
		if (literal[i] == '.')
			dotCnt++;
		else if (!isdigit(literal[i]))
			throw TypeConversion::InvalidInputException();
		if (dotCnt > 1)
			throw TypeConversion::InvalidInputException();
	}
	if (dotCnt > 0 && literal[i] == '.')
		throw TypeConversion::InvalidInputException();
	if (!isdigit(literal[i]) && literal[i] != 'f' && literal[i] != '.')
		throw TypeConversion::InvalidInputException();
}

void TypeConversion::setLiteralType(const char *literal)
{
	const std::string str = literal;

	checkValidInput(literal);
	this->literal = atof(literal);
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
	if (this->literal <= INT_MAX && this->literal >= INT_MIN)
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

const int &TypeConversion::getLiteralType(void) const
{
	return (this->literalType);
}