/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ReplaceStr.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 20:48:32 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/01 17:16:01 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ReplaceStr.hpp"

bool	ReplaceStr::openFile( std::string f )
{
	this->ifs.open(f, std::ifstream::in);
	if (!this->ifs.is_open())
	{
		std::cout << "Fail to open file." << std::endl;
		return (false);
	}
	else
	{
		this->ofs.open(f.append(".replace"), std::ofstream::out | std::ofstream::trunc);
		if (!this->ofs.is_open())
		{
			std::cout << "Fail to open file." << std::endl;
			return (false);
		}
		return (true);
	}
}

void	ReplaceStr::replaceStr( std::string f, std::string s1, std::string s2 )
{
	std::string		line;
	std::size_t		pos;

	if (ReplaceStr::openFile(f) == false)
		return ;
	this->s1 = s1;
	this->s2 = s2;
	while (getline(ifs, line))
	{
		if ((pos = line.find(this->s1)) != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, this->s2);
		}
		ofs << line << std::endl;
	}
	ifs.close();
	ofs.close();
}

ReplaceStr::ReplaceStr()
{
}

ReplaceStr::~ReplaceStr()
{
}