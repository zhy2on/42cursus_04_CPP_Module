/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 18:00:22 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/01 19:27:47 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for ";
	std::cout << "my 7XL-double-cheese-triple-pickle-specialketchup burger. ";
	std::cout << "I really do!\n" << std::endl;
}

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!\n" << std::endl;
}

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started working here ";
	std::cout << "since last month.\n" << std::endl;
}

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! ";
	std::cout << "I want to speak to the manager now.\n" << std::endl;
}

void	Harl::complainFilter( std::string filter )
{
	std::string	levels[] = {
		"DEBUG",
		"INFO",
		"WARNING",
		"ERROR"
	};
	void		(Harl::*fptr[])( void ) = {
		&Harl::debug,
		&Harl::info,
		&Harl::warning,
		&Harl::error
	};
	bool	flag = false;

	for (int i = 0; i < 4; i++)
	{
		if (filter == levels[i])
			flag = true;
		if (flag == true)
			(this->*fptr[i])();
	}
	if (flag == false)
	{
		std::cout << "[ Probably complaining about insignificant problems ]";
		std::cout << std::endl;
	}
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
