/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:48:32 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/31 21:27:54 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceStr.hpp"

ReplaceStr::ReplaceStr( std::string s1, std::string s2, std::string filename )
{
	this->s1 = s1;
	this->s2 = s2;
	this->filename = filename;
}

void	ReplaceStr::setS1( std::string s1 )
{
	this->s1 = s1;
}

void	ReplaceStr::setS2( std::string s2 )
{
	this->s2 = s2;
}

void	ReplaceStr::setFileName( std::string filename )
{
	this->filename = filename;
}

void	ReplaceStr::replaceStr( void )
{
	std::fstream	fs;
	std::string		line;

	fs.open(this->filename);
	while (getline(fs, line))
	{
		if (line.find(this->s1))
		{
			
		}
	}
}

ReplaceStr::ReplaceStr()
{
}

ReplaceStr::~ReplaceStr()
{
}