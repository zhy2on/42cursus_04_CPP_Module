/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/24 20:10:03 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/28 17:32:50 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	std::string	cmd;
	Phonebook	phonebook;

	std::cout << "\033[0;32mjihoh's phonebook\033[0m" << std::endl;
	std::cout << "\033[0;33mEnter a command: [ADD SEARCH EXIT]\033[0m" << std::endl << "> ";
	while (1)
	{
		std::cin >> cmd;
		if (std::cin.eof() || !cmd.compare("EXIT"))
			break ;
		else if (!cmd.compare("ADD"))
			phonebook.add_contact();
		else if (!cmd.compare("SEARCH"))
			phonebook.search_contact();
		else
			std::cout << "\033[0;31mInvalid command\033[0m" << std::endl;
		std::cout << "\033[0;33mEnter a command: [ADD SEARCH EXIT]\033[0m" << std::endl << "> ";
	}
	return (0);
}
