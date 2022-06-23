/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoh <jihoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 23:43:51 by jihoh             #+#    #+#             */
/*   Updated: 2022/06/23 16:58:41 by jihoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.hpp"
#include <iostream>

uintptr_t serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}

int main(void)
{
	Data *ptr = new Data;
	Data *ptr2;
	uintptr_t raw;

	ptr->data = 42;
	raw = serialize(ptr);
	ptr2 = deserialize(raw);
	std::cout << "ptr->data: " << ptr->data << std::endl;
	std::cout << "ptr2->data: " << ptr2->data << std::endl;
	ptr->data = 24;
	std::cout << "ptr->data: " << ptr->data << std::endl;
	std::cout << "ptr2->data: " << ptr2->data << std::endl;

	return 0;
}