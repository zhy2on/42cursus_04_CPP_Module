/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/28 15:06:07 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/28 17:16:40 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void	Phonebook::add_contact(void)
{
	if (this->cnt == 8)
		std::cout << "\033[0;31mOuf of memory.\033]0m" << std::endl;
	else
	{
		contacts[cnt].set_contact_info(cnt);
		cnt++;
		std::cout << "\033[0;32mAdded successfully!\033[0m" << std::endl;
	}
}

void	Phonebook::search_contact(void)
{
	int	index;

	Phonebook::display_search_prompt();
	std::cout << "Enter index want to search(exit: -1): ";
	while (1)
	{
		std::cin >> index;
		if (index >= cnt || std::cin.fail())
		{
			std::cout << "\033[0;31mInvalid index. Please try it again.\033[0m" << std::endl;
			std::cin.clear();
			std::cin.ignore(INT_MAX, '\n');
		}
		else if (index == -1)
			break ;
		else
			this->contacts[index].display_all_info();
		std::cout << "Enter index want to search(exit: -1): ";
	}
	
}

void	Phonebook::display_search_prompt(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->cnt; i++)
		this->contacts[i].display_search_header();
	std::cout << "|-------------------------------------------|" << std::endl;
}

Phonebook::Phonebook()
{
	this->cnt = 0;
}

Phonebook::~Phonebook()
{
}
