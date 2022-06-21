/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 20:40:13 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/21 21:17:27 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "easyfind.hpp"

int main(void)
{
	std::vector<int> vect;
	std::vector<int>::iterator it;

	for (int i = 1; i <= 5; ++i)
		vect.push_back(i);

	it = easyfind(vect, 1);
	if (it != vect.end())
		std::cout << "Element found in container: " << *it << std::endl;
	else
		std::cout << "Element not found in container" << std::endl;

	it = easyfind(vect, 5);
	if (it != vect.end())
		std::cout << "Element found in container: " << *it << std::endl;
	else
		std::cout << "Element not found in container" << std::endl;

	it = easyfind(vect, 42);
	if (it != vect.end())
		std::cout << "Element found in container: " << *it << std::endl;
	else
		std::cout << "Element not found in container" << std::endl;
}