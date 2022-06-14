/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 19:18:19 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/14 19:51:40 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try {
		Bureaucrat jihoh = Bureaucrat("jihoh", 10);
		std::cout << jihoh << std::endl;
		jihoh.incrementGrade(9);
		std::cout << jihoh << std::endl;
		jihoh.decrementGrade(149);
		std::cout << jihoh << std::endl;
		jihoh.decrementGrade(100);
		std::cout << jihoh << std::endl;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	try {
		Bureaucrat bob = Bureaucrat("bob", 150);
		std::cout << bob << std::endl;
		bob.incrementGrade(100);
		std::cout << bob << std::endl;
		bob.incrementGrade(100);
		std::cout << bob << std::endl;
		bob.incrementGrade(100);
		std::cout << bob << std::endl;
	} catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
}