/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TypeConversion.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 18:08:31 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/26 17:27:16 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPECONVERSION_CLASS_H
# define TYPECONVERSION_CLASS_H

# include <iostream>
# include <string>
# include <cctype>
# include <cstdlib>

class TypeConversion
{
private:
	int literalType;
	double literal;

	enum {
		noType = -1,
		charType = 0,
		intType = 1,
		floatType = 2,
		doubleType = 3,
		nanType = 4,
		infType = 5
	};

	void checkValidInput(const char *literal);
	bool setSpecialLiteralType(const char *literal);
	void setLiteralType(const char *literal);

	TypeConversion(void);

public:
	TypeConversion(const char *literal);
	TypeConversion(const TypeConversion &rhs);
	~TypeConversion(void);

	TypeConversion &operator=(const TypeConversion &rhs);

	void literalToChar(void) const;
	void literalToInt(void) const;
	void literalToFloat(void) const;
	void literalToDobule(void) const;

	const int &getLiteralType(void) const;

	class InvalidInputException : public std::exception
	{
	public:
		const char *what() const throw();
	};
};


#endif