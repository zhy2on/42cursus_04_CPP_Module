/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/30 21:39:32 by jihoh             #+#    #+#             */
/*   Updated: 2022/05/31 19:26:58 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main()
{
	std::string	string = "HI THIS IS BRAIN";
	std::string	*stringPTR = &string;
	std::string	&stringREF = string;

	std::cout << "memory address [stringPTR]: " << stringPTR << std::endl;
	std::cout << "memory address [stringPTR]: " << &stringREF << std::endl;
	std::cout << "value pointed to by [stringPTR]: " << *stringPTR << std::endl;
	std::cout << "value pointed to by [stringPTR]: " << stringREF << std::endl;

	return (0);
}