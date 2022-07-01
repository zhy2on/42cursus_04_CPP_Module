/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConversion.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:22:26 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/26 17:27:13 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TypeConversion.hpp"

TypeConversion::TypeConversion(void)
	: literalType(TypeConversion::noType)
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

bool TypeConversion::setSpecialLiteralType(const char *literal)
{
	const std::string inf[] = {"inff", "+inff", "-inff", "inf", "+inf", "-inf"};
	const std::string nan[] = {"nan", "nanf"};

	for (int i = 0; i < 6; i++)
	{
		if (literal == inf[i])
		{
			this->literalType = TypeConversion::infType;
			if (literal[0] == '-')
				this->literal = -1;
			else
				this->literal = 1;
			return true;
		}
	}
	for (int i = 0; i < 2; i++)
	{
		if (literal == nan[i])
		{
			this->literalType = TypeConversion::nanType;
			return true;
		}
	}
	return false;
}

void TypeConversion::setLiteralType(const char *literal)
{
	const std::string str = literal;

	if (setSpecialLiteralType(literal))
		return;
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
	if (this->literalType != TypeConversion::nanType && this->literalType != TypeConversion::infType
		&& this->literal <= INT_MAX && this->literal >= INT_MIN)
		std::cout << "int: " << static_cast<int>(this->literal) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
}

void TypeConversion::literalToFloat(void) const
{
	if (this->literalType == TypeConversion::nanType)
		std::cout << "float: nanf" << std::endl;
	else if (this->literalType == TypeConversion::infType)
	{
		if (this->literal < 0)
			std::cout << "float: -inff" << std::endl;
		else
			std::cout << "float: inff" << std::endl;
	}
	else
	{
		std::cout << "float: " << static_cast<float>(this->literal);
		if (this->literal == static_cast<int>(this->literal))
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
}

void TypeConversion::literalToDobule(void) const
{
	if (this->literalType == TypeConversion::nanType)
		std::cout << "double: nan" << std::endl;
	else if (this->literalType == TypeConversion::infType)
	{
		if (this->literal < 0)
			std::cout << "double: -inf" << std::endl;
		else
			std::cout << "double: inf" << std::endl;
	}
	else
	{
		std::cout << "double: " << this->literal;
		if (this->literal == static_cast<int>(this->literal))
			std::cout << ".0";
		std::cout << std::endl;
	}
}

const char *TypeConversion::InvalidInputException::what() const throw()
{
	return ("Invalid input. Please input numeric or character value.");
}

const int &TypeConversion::getLiteralType(void) const
{
	return (this->literalType);
}